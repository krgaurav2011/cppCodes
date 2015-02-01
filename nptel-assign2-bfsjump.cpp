//NPTEL MOOC Assignment 2
// Graph BFS
// Jan 27,2015



#include <iostream>
#include <list>
#include <vector>
using namespace std;
#define ll long long int 
class Graph
{
	int V;
	list<int> *adj;
	public:
	Graph(int v)
	{
		this->V=v;
		adj = new list<int>[v+1];
	}
	void addEdge(int s,int d);
	void BFS(int s,int d);
};
void Graph::addEdge(int s,int d)
{
		adj[s].push_back(d);
}
void Graph::BFS(int s,int d)
{
	int st=s;
	int dt =d;
	bool *visited = new bool[V+1];
	int *parent = new int[V+1];
    for(int i = 1; i <= V; i++)
        visited[i] = false;
	list<ll> queue;
	visited[s]=true;
	queue.push_back(s);
	list<int>:: iterator i;
	int found=0;
	ll count=0;
	while(!queue.empty() && !found)
	{
		s = queue.front();
		queue.pop_front();
		 for(i = adj[s].begin(); i != adj[s].end(); ++i)
		{
			if(!visited[*i])
			{
				visited[*i]=true;
				parent[*i]=s;
				if(*i==d){
					found=1;
					break;
				}
				queue.push_back(*i);
			}	
		}
		if(found==1)
			break;
		
	}
	if(found==1)
	{
		int i=dt;
		while(i!=st)
		{
			count++;
			i=parent[i];
		}	
		cout<<count;
	}
	else
		cout<<"0";
}

int main()
{
	
	/*g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    cout << "Following is Breadth First Traversal (starting from vertex 2) \n";
    */
    int a,b,n,s,d;
    ll m;
    cin>>n>>m;
    Graph g(n);
    for(ll i=0;i<m;i++)
    {
		cin>>a>>b;
		g.addEdge(a,b);
		g.addEdge(b,a);
	}
    cin>>s>>d;
    
    g.BFS(s,d);
}
