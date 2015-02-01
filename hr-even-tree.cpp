#include <iostream>
#include <vector>
#include <list>

using namespace std;
int m,n,ans;
vector <bool>visited(n,false);
list<int> *adj;

int dfs(int x)
{
	
	visited[x]=true;
	int num_vertex=0;
	list<int>::iterator i;
	for(i=adj[x].begin();i!=adj[x].end();i++)
	{
		if(!visited[*i])
		{
			int num_nodes=dfs(*i);
			if(num_nodes%2==0)
				ans++;
			else
				num_vertex+=num_nodes;
		}
	}
	return num_vertex+1;
	
}
int main()
{
	int x,y;
	cin>>n>>m;
	adj = new list<int>[n+1];
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	dfs(1);
	cout<<ans;
	
	
}
