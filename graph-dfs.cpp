#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Graph{
	int V;
	list <int> *adj;
	public:
	int time;
	int *color,*parent,*discovery,*finish;
	 
	Graph(int v)
	{
		this->V=v;
		adj = new list<int>[v];
		color = new int[v];
		parent =  new int[v];
		discovery  = new int[v];
		finish  = new int[v];	
		time=0;
	}
	void addEdge(int s,int d);
	void DFS();
	void DFS_Visit(int u);
};

void Graph::addEdge(int s,int d)
{
	adj[s].push_back(d);
}
void Graph::DFS()
{
	int i;
	for(i=0;i<V;i++)
	{
		color[i]=0;
		parent[i]=-1;
	}
	//int time=0;
	for(i=0;i<V;i++)
	{
		if(color[i]==0)
			DFS_Visit(i);
	}
}
void Graph::DFS_Visit(int u)
{
	time=time+1;
	discovery[u]=time;
	color[u]=1;
	//cout<<"intime"<<time<<endl;
	cout<<u<<" ";
	list<int>:: iterator i;
	for(i=adj[u].begin();i!=adj[u].end();i++)
	{
		if(color[*i]==0)
		{
			cout<<"tree edge "<<u<<" -->"<<*i<<endl;
			parent[*i]=u;
			DFS_Visit(*i);
		}
		else if(color[*i]==1)
		{
			cout<<"back edge "<<u<<" -->"<<*i<<endl;
		}
		else if(color[*i]==2)
		{
			if(discovery[u]<discovery[*i])
				cout<<"forward edge "<<u<<" -->"<<*i<<endl;
			else
				cout<<"cross edge "<<u<<" -->"<<*i<<endl;	
		}
	}
	color[u]=2;
	time++;
	finish[u]=time;
}


int main()
{
	Graph g(6);
	g.addEdge(0, 1);
    g.addEdge(0, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);
    g.addEdge(2, 5);
    g.addEdge(3, 1);
    g.addEdge(4, 3);
    g.addEdge(5, 5);
    g.DFS();
    for(int i =0;i<6;i++)
    {
		cout<<"disc: "<<g.discovery[i];
		cout<<" finish :"<<g.finish[i]<<endl;
	}
	cout<<"color: ";
	for(int i =0;i<6;i++)
    {
		cout<<g.color[i]; 
	}
	cout<<"\nParent:";
	for(int i =0;i<6;i++)
    {
		cout<<"of "<<i<<" :"<<g.parent[i]<<endl; 
	}
}
