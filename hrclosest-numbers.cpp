#include <bits/stdc++.h>
using namespace std ;
#define ll long long int

int main()
{
	ll n,a[200009],min,minarr[200009],t=0;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	/*for(ll i=0;i<n;i++)
	{
		cout<<a[i];
	}*/
	min=a[1]-a[0];
	minarr[t++]=a[0];
	minarr[t++]=a[1];
	for(ll i=2;i<n;i++)
	{
		if(a[i]-a[i-1]==min)
		{
			minarr[t++]=a[i-1];
			minarr[t++]=a[i];
		}
		else if(a[i]-a[i-1]<min)
		{
			t=0;
			min=a[i]-a[i-1];
			minarr[t++]=a[i];
		}	
	}
	for(ll i=0;i<t;i++)
	{
		cout<<minarr[i]<<" ";
	}
}
