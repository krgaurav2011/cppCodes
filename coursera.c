#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>

#define MAX 800
#define NUM 200
const char INFILE[]="mincut.txt";

struct EDGE
{
	short vertex;
	struct EDGE *next;
};
//	All the functions defined in this problem
struct EDGE ** fetch_graph(struct EDGE **graph);

void print_graph(struct EDGE **graph);

short *random_pick(struct EDGE **graph, short *pair);

void merge_vertices(struct EDGE **graph, short *pair);

void delete_selfloop(struct EDGE **graph);

void contraction(struct EDGE **graph);

short solve_mincut(struct EDGE **graph);
int main()
{
	srand(time(0));
	struct EDGE **graph,*node;
	short j,MinCut,new;
	MinCut = 10000;
	for (j=0; j<1000; j++)	{
		new = solve_mincut(fetch_graph(graph));
		MinCut = (new<MinCut)?new:MinCut;
	}
	printf("MinCut = %d\n", MinCut);	
	return 0;	
}

struct EDGE ** fetch_graph(struct EDGE **graph)
{
	struct EDGE *node;
	FILE *fp = fopen(INFILE,"r");
	char line[MAX], *token;
	short j;

	graph = (struct EDGE**)calloc(NUM,sizeof(struct EDGE*));
	for (j=0; j<NUM; j++)	{
		node = (struct EDGE*)malloc(sizeof(struct EDGE));
		node->vertex = j+1; 
		node->next = NULL;
		graph[j]=node;
	//	here 'node' is a sentinel in linked list
		fgets(line,MAX,fp);
		token = strtok(line,"\t");
		while (token = strtok(NULL,"\t"))	{
			if (atoi(token))	{
				node = (struct EDGE*)malloc(sizeof(struct EDGE));
				node->vertex = atoi(token);
				node->next = graph[j]->next;
				graph[j]->next = node;
			}
		}
	}
	return graph;
}

void print_graph(struct EDGE **graph)
{
	short j;
	struct EDGE *node;
	for (j=0; j<NUM; j++)	{
		printf("%d\t",j+1);
		for (node=graph[j]; node->next; node=node->next)
			printf("%d\t",node->next->vertex);
		printf("\n");
	}
}

short *random_pick(struct EDGE **graph, short *pair)
{
	short i,j,pick,m=0;	//	m is the double edge number
	struct EDGE *node;
	pair = (short *)calloc(2,sizeof(short));
	for (j=0; j<NUM; j++)
		for (node = graph[j]; node->next; node = node->next)
			m++;
	pick = rand()%m+1;

	node = (struct EDGE*)malloc(sizeof(struct EDGE));
	node->next = NULL;
	for (i=0, j=0; j<pick; )
		if (node->next)	{
			node = node->next;
			j++;
		}
		else
			node = graph[i++];
	pair[0]=i;
	pair[1] = node->vertex;
//	printf("merge %d and %d (replace all '%d' with '%d')\n",pair[0],pair[1],pair[0],pair[1]);
	return pair;
}

void merge_vertices(struct EDGE **graph, short *pair)
{
	struct EDGE *node;
	short i,j,k;
	for (k=0; k<NUM; k++)
		for (node = graph[k]; node->next; node = node->next)
			if (node->next->vertex == pair[0])
				node->next->vertex = pair[1];
//	printf("after replacing\n");
//	print_graph(graph);
	node = graph[pair[1]-1];
	while (node->next)
		node = node->next;
	node->next = graph[pair[0]-1]->next;
	graph[pair[0]-1]->next = NULL;
//	printf("after merging\n");
//	print_graph(graph);
}

void delete_selfloop(struct EDGE **graph)
{
	struct EDGE *node;
	short k, ref;
	for (k=0; k<NUM; k++)	
		if (graph[k]->next)	{
			ref = graph[k]->vertex;
			for (node = graph[k]; node->next; )
				if (node->next->vertex == ref)
					node->next = node->next->next;
				else
					node = node->next;
		}
}

void contraction(struct EDGE **graph)
{
	short *pair;
	pair = random_pick(graph, pair);
	merge_vertices(graph, pair);
	delete_selfloop(graph);
}

short solve_mincut(struct EDGE **graph)
{
	short k,m=0;
	struct EDGE *node;
	for (k = NUM; k>2; k--)
		contraction(graph);
	for (k=0; k<NUM; k++)
		for (node = graph[k]; node->next; node = node->next)
			m++;
	return m/2;
}
