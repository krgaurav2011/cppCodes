//JAN 2015 LONG 

#include <bits/stdc++.h>
using namespace std ;
#define ll long long int

int main()
{
	ll t;
	scanf("%lld",&t);
	while(t--)
	{
		ll n,a[100005],sum=0,flag=0;
		scanf("%lld",&n);
		for(ll i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			if(a[i]==0)
			{
				flag++;
			}
			sum+=a[i];
		}
		if (sum==100)
		{
				printf("YES\n");
		}
		else if(sum >100 && (sum-100) /(n-flag) < 1 )
		{
			
				printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}
