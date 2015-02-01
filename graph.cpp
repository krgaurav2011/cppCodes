//Implementation of Graph DS 
//REF : CLRS Book
// Jan 20,2015		Kumar Gaurav


#include <iostream>
#include <list>
#include <vector>
using namespace std;
vector< list<int> > adjlist(5);

void addedge(int s,int d)
{
	adjlist[s-1].push_back(d);
}


int main()
{
	//int n;
	//cin>>n;
	addedge(1,5);
	addedge(1,2);
	addedge(3,1);
	addedge(2,4);
	addedge(4,3);
	addedge(5,2);
	int count=0;
	for(vector< list<int> >:: iterator i=adjlist.begin();i!=adjlist.end();i++)
	{
		cout<<"Node "<<++count<<" :";
		list<int> li = *i;
		for(list<int>::iterator iter = li.begin();iter!= li.end();iter++)
		{
			cout<<*iter<<" ";
		}
		cout<<endl;
	} 
	 
	
}
