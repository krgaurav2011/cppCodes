#include <bits/stdc++.h>
using namespace std ;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,a[100005],b[100005];
		cin>>n>>k;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(ll i=0;i<n;i++)
		{
			cin>>b[i];
		}
		ll max=INT_MIN;
		ll num;
		for(ll i=0;i<n;i++)
		{
			num=k/a[i];
			if(b[i]*num >max)
				max=b[i]*num;
		}
		cout<<max<<endl;
		
	}
}
