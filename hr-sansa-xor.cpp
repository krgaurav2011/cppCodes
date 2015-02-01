#include <bits/stdc++.h>
using namespace std ;
#define ll long long int




int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		ll ans=0;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			if(i%2==0)
				ans^=a[i];
		}
		if(n%2==0)
			cout<<"0";
		else
			cout<<ans<<endl;
}
}
