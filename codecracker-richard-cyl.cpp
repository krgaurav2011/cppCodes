#include <bits/stdc++.h>
using namespace std ;
#define ll long long int


int main()
{
	int test;
	double x1,y1,x2,x3,x4,y2,y3,y4,rotn,x,y,p,q,r,dist;
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	cin>>test;
	rotn=sqrt((x1-x4)*(x1-x4)+(y1-y4)*(y1-y4));
	//cout<<rotn;
	while(test--)
	{
		cin>>x>>y>>p>>q>>r;
		dist=sqrt((y-q)*(y-q)+(x-p)*(x-p));
		if(dist+r<=rotn)
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
	
	
}
