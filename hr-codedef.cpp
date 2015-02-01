#include <bits/stdc++.h>
using namespace std ;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		char a[100005],b[100005]={0};
		cin>>a;
		
		ll k=0;
		for(ll i=0;i<strlen(a);i++)
		{
			if(i%2!=0)
			{
				for(ll j=0;j<(a[i]-48);j++)
				{
					b[k++]=a[i-1];
				}
				
			}
		}
		cout<<b<<endl;
		
	}
}
