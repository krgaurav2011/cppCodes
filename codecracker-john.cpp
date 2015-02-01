#include <bits/stdc++.h>
using namespace std ;
#define ll long long int


int main()
{
	ll n,k,x,count=0;
	cin>>n>>k;
	for(ll i=0;i<n;i++)
	{
		scanf("%lld",&x);
		if(x%2==1 && x<k)
			count++;
	}
	printf("%lld",count);
}
