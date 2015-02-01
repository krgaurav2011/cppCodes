#include <bits/stdc++.h>
using namespace std ;
#define ll long long int


int main()
{
	ll n=6;
	//cin>>n;
	
	ll a[n+1][n+1],ansx[n*n],ansy[n*n];
	ll num=1;
	ll t,x,y,i,j;
	for(i=1;i<=n;i+=2)
	{
		for(j=1;j<i;j++)
		{
			a[i][j]=num++;
			ansx[num-1]=i;
			ansy[num-1]=j;
		}	
		for(t=i;t>=1;t--)
		{	
			a[t][j]=num++;
			ansx[num-1]=t;
			ansy[num-1]=j;
		}	
		j++;
		if(j<=n)
		{
			for(x=1;x<=i+1;x++)
			{
				a[x][j]=num++;
				ansx[num-1]=x;
				ansy[num-1]=j;
			}	
			for(y=j-1;y>=1;y--)
			{
				a[j][y]=num++;
				ansx[num-1]=j;
				ansy[num-1]=y;
			}		
		}	
				
	}
	for(ll i=1;i<=n;i++)
	{
			for(ll j=1;j<=n;j++)
			{
				cout<<a[i][j]<<"  ";
			}
			cout<<endl;
	
	}
	ll test;
	cin>>test;
	while(test--)
	{
		ll a;
		cin>>a;
		cout<<ansx[a]<<" "<<ansy[a];
	}
			
	
	
}
