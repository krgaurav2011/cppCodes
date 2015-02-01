//REF: http://www.codechef.com/RCSN2015/problems/RECPLA
//similar to 0-1 Knapsack Problem
//Kumar Gaurav 25Jan2014


#include <bits/stdc++.h>
using namespace std ;
#define ll long long int

/*ll Knapsack(ll a[],ll n, ll c)											//using DP (Bottom-UP)
{
	ll k[n+1][c+1];
	
	for(ll i=0;i<=n;i++)
	{
		for(ll j=0;j<=c;j++)
		{
			if(n==0 || c==0)
				k[i][j]=0;
			else if(a[i-1]>c)
				k[i][j]=k[i-1][j];
			else
				k[i][j]=max(k[i-1][j],k[i-1][j-a[i-1]]+a[i-1]);

		}
	}
	return k[n][c];
	
}*/

ll Knapsack(ll a[],ll n, ll c)											// Recursive solution O(n^2)
{
	if(n==0 || c==0)
		return 0;
	if(a[n-1]>c)
			return Knapsack(a,n-1,c);
	else
			return max(Knapsack(a,n-1,c),Knapsack(a,n-1,c-a[n-1])+a[n-1]);
			
}

int main()
{
	ll t,a[25];
	cin>>t;
	while(t--)
	{
		ll n,c;
		cin>>n>>c;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<c-Knapsack(a,n,c)<<endl;
		
	}
}	
