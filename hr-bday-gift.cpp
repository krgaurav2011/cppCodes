#include <bits/stdc++.h>
using namespace std ;
#define ll long long int


int main()
{
	ll test;
	cin>>test;
    ll z=test;
	while(test--)
	{
		ll a;
		cin>>a;
		//cout<<ansx[a]<<" "<<ansy[a];
		ll root=sqrt(a);
		//cout<<root;
		ll n=root*root;
		ll ansx,ansy,capacity,diff;
			if(a==n)
			{
				ansy=1;
				ansx=root;
			}
			else
			{
				capacity=root+1;
				n++;
				diff=a-n+1;
				if(diff>capacity)
				{
					ansy=capacity;
					ansx=2*capacity-diff;
				}
				else
				{
					ansx=root+1;
					ansy=diff;
				}
			}
			
		
		if(root%2==0)
		{
			cout<<"Case "<<z-test<<": "<<ansx<<" "<<ansy<<endl;
		}
		else
		{
			cout<<"Case "<<z-test<<": "<<ansy<<" "<<ansx<<endl;
		}	
	}
			
	
}
