#include <bits/stdc++.h>
using namespace std ;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		char a[1000005];
		ll n;
		cin>>n;
		cin>>a;
		ll count=0,temp=0;
		/*temp=a[0]-48;
			if(temp%n==0)
			{
				count++;
				if(count%2==0)
					cout<<temp<<" She loves me";
				else
					cout<<temp<<" She loves me not";
			}*/
		for(ll i=0;i<strlen(a)-1;i++)
		{
			ll z= a[i]-48;
			//cout<<"Z :"<<z;
			temp=(temp<<1 )+z;
			//cout<<temp;
			if(temp%n==0)
			{
				count++;
				if(count%2==0)
					cout<<i+1<<" She loves me not"<<endl;
				else
					cout<<i+1<<" She loves me"<<endl;
			}
		}
		
	}
}	
