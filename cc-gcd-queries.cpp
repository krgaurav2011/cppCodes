//JAN 2015 LONG 

#include <bits/stdc++.h>
using namespace std ;
#define ll long long int
ll gcd(ll a, ll b)
{
   if(b==0) 
		return a;

   return gcd(b,a%b);
}    

int main()
{
	ll t;
	scanf("%lld",&t);
	while(t--)
	{
		ll a[100005],n,q,l,h;
		scanf("%lld",&n);
		scanf("%lld",&q);
		for(ll i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		ll fr[n],bk[n];
		fr[0]=a[0];
		for(ll i=1;i<n;i++)
		{
			fr[i]=gcd(a[i],fr[i-1]);
		}
		bk[n-1]=a[n-1];
		for(ll i=n-2;i>=0;i--)
		{
			bk[i]=gcd(a[i],bk[i+1]);
		}
		/*for(ll i=0;i<n;i++)
		{
			
			cout<<fr[i]<<" ";
		}
		cout<<endl;
		for(ll j=0;j<n;j++)
			{
				cout<<bk[j]<<" ";
			}*/
		while(q--)
		{	
			scanf("%lld",&l);
			scanf("%lld",&h);
			if(h==n)
				printf("%lld\n",fr[l-2]);
			else if(l==1)
				printf("%lld\n",bk[h]);
			else	
				printf("%lld\n",gcd(fr[l-2],bk[h]));
		}
	}
}			


