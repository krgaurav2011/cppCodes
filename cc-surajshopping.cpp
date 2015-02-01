//codechef
//Kumar Gaurav Jan 242,015


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
		ll a[n+1];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n,greater<ll>());
		//ll a[n];
		/*for(ll i=0;i<n;i++)
		{
			cout<<a[i];
		}*/
		ll z=0,count=0,sum=0;
		
		while(z<n)
		{
			if(count==2)
			{
				z+=2;
				count=0;
			}
			else
			{
				sum+=a[z];
			count++;
			z++;
				}
			
		}
		cout<<sum<<endl;
		
	}
}	
