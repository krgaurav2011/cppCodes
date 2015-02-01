#include <iostream>
using namespace std ;

int minwidth(int entry ,int exit ,int width[])
{
	int min=width[entry];
	for(int j=entry;j<=exit;j++)
	{
		if(width[j]<min)
			min=width[j];
	}
	return min;	
}

int main()
{
	int width[100000],n,t,i=0,path[2000];
	
	cin>>n>>t;
	while(i<n)
	{
		cin>>width[i++];
		
	}
	i=0;
	while(i< 2*t)
	{
		cin>>path[i];
		cin>>path[i+1];
		i+=2;
	}
	i=0;
	while(i< 2*t)
	{
		int entry =path[i];
		int exit =path[i+1];
		int vehicle= minwidth(entry,exit,width);
		cout<<vehicle<<"\n";
		i+=2;
	}		
	
}	
