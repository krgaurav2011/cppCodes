#include <bits/stdc++.h>
using namespace std ;
#define ll long long int
ll k;
ll func(ll a[],ll i,ll n)
{
		
}
int main()
{
	ll t,n,*a;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		a=new ll[n];
		for(ll i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			b[i]=a[i];
		}
		sort(b.b+n);
		end=n-1;
		start=0;
		while(end>start)
		{
			if(b[end]-b[start]==k)
			{
				min=a[start];
				max=a[end];
				break;
			}
			else if(k>(b[end]-b[start])
			{
				end--;
			}
			else
			{
				start++;
			}
		}
		if(end==start)
		{
			
		}
		for(ll i=0;i<n;i++)
		{
			if(a[i]==min)
				loc1=i;
			if(a[i]==max)
				loc2=i;
		}
		cout<<abs(loc2-loc1+1);
		
		
		
	}
}	
