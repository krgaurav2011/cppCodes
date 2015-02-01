/* TRIE Data Structure
 * REFERENCES : http://community.topcoder.com/tc?module=Static&d1=tutorials&d2=usingTries
 * 				www.geeksforgeeks.org/trie-delete/index.html
 * Date : DEC262014
 * Kumar Gaurav
 */

#include <bits/stdc++.h>
using namespace std;

struct node{
	char c;
	int prefixes;
	int eow;
	struct node* edges[26];
};
struct node* root;
int search_word(char *s)
{
	struct node* t= root;
	while(*s!='\0')
	{
		int c = toupper(*s) -'A';
		if(t->edges[c]==NULL)
			return 0;
		else
			t=t->edges[c];
		*s++;	
	}
	if(t->eow == 1)
		return 1;
	else
		return 0;
}
void insert(char *s)
{
	struct node* t= root;
	while(*s!='\0')
	{
		int c = toupper(*s) -'A';
		if(t->edges[c]==NULL)
		{
			struct node* x = (struct node*)malloc(sizeof(struct node));
			x->c=*s;
			x->eow=0;
			x->prefixes=1;
			for(int i=0;i<26;i++)
				x->edges[i]=NULL;
			t->edges[c]=x;
			t=x;
		}
		else
		{
			t=t->edges[c];
			t->prefixes++;
		}
		*s++;
	}
	t->eow=1;	
	
}
void init_trie()
{
	root = (struct node*)malloc(sizeof(struct node));
	root->c='\0';
	root->prefixes=0;
	root->eow=0;
	for(int i=0;i<26;i++)
		root->edges[i]=NULL;
}
void display(struct node* t)
{
    if(t == NULL)
        return;
 
    cout<< t->c << " :: " << t->eow << " :: " << t->prefixes << endl;
 
    for(int i=0;i<26;i++)
    {
        if(t->edges[i] != NULL)
            display(t->edges[i]);
    }
}
void truncate_node(struct node* x)
{
	for(int i=0;i<26;i++)
    {
		if(x->edges[i]!=NULL)
		{
			truncate_node(x->edges[i]);
		}
	}	
	delete x;

		
}
void delete_word(char *s)
{
	struct node* t = root;
	while(*s)
	{
		int c = toupper(*s) -'A';
		if(t->edges[c]==NULL)
		{
			return;
		}
		else if(t->edges[c]->prefixes==1)
		{
			truncate_node(t->edges[c]);
			t->edges[c]=NULL;
			return;
		}
		else
		{
			t=t->edges[c];
			t->prefixes--;
		}	
		
		*s++;
	}
}
 
int main()
{
	init_trie();
	insert("tree");
    insert("trie");
    insert("love");
    insert("lovable");
    insert("india");
    insert("independent");
    cout<<search_word("tree");
    cout<<search_word("rie")<<endl;
    delete_word("independent");
    cout<<search_word("independent")<<endl;
    display(root);
}
