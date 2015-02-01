#include <bits/stdc++.h>
using namespace std ;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a[100005],n;
		scanf("%lld",&n);
		for(ll i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		//char s[10005];
		//cin>>s;
		//sort(a,a+n);
		ll max= INT_MIN;
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<i;j++)
			{
				if(a[i]-a[j]>max)
					max=a[i]-a[j];
			}
		}
		//cout<<a[n-1]-a[0]<<endl;
		cout<<max<<endl;
	}
}
