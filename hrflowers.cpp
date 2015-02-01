#include <bits/stdc++.h>
using namespace std ;
#define ll long long int

int main()
{
	ll n,a[105],k;
	cin>>n>>k;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	ll z=0;
	ll sum=0;
	ll count=0;
	for(ll i=n-1;i>=0;i--)
	{
		count++;
		sum+=((z+1)*a[i]);
		//cout<<sum<<endl;
		if(count==k)
		{
			z++;
			count=0;
		}
	}
	cout<<sum;
}
