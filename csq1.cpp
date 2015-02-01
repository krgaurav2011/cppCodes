#include <bits/stdc++.h>

using namespace std ;
#define lli long long int

lli abso(lli x)
{
	if(x<0)
		return -1*x;
	else 
		return x;
	
}
int main()
{
	lli t,x,y,x1,y1,x2,y2,min,a[5];
	cin>>t;
	
	while(t--)
	{
		cin>>x>>y>>x1>>y1>>x2>>y2;
		a[1]=abso(x-x1);
		a[2]=abso(x-x2);
		a[3]=abso(y-y1);
		a[4]=abso(y-y2);
		min=a[1];
		for(int i=1;i<4;i++)
		{
			if(a[i]<min)
				min=a[i];
		}
		cout<<min<<endl;
		
		
	}
}
