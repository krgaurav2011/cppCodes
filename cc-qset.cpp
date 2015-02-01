//JAN 2015 LONG 

#include <bits/stdc++.h>
using namespace std ;
#define ll long long int
char a[100005];

void countnum(ll c, ll d)
{
	ll new_val[3];
	ll old[3],swap[3];
	ll sum=0,res;
	for(ll j=0;j<3;j++)
	{
			//swap[i] = old[i];
			old[j] = 0; 
			new_val[j] = 0;
	}
	for(ll i=c;i<=d;i++)
	{
		res= (a[i]-48)%3;
		new_val[(res+0) % 3] = old[0] + 1;
        new_val[(res+1) % 3] = old[1];
        new_val[(res+2) % 3] = old[2];
        sum += new_val[0];
		for(ll j=0;j<3;j++)
		{
			swap[i] = old[i];
			old[i] = new_val[i]; 
			new_val[i] = swap[i];
		}
		
	}
	cout<<sum<<endl;	
}

int main()
{
	ll n,m;
	cin>>n>>m;
	cin>>a;
	/*for(ll i=0;i<strlen(numstr);i++)
	{
		for(ll j=i+1;i<=strlen(numstr);j++)
		{
			
		}
	}*/
	while(m--)
	{
	
	ll c,d,x;
		cin>>x>>c>>d;
		if(x==1)
		{
			a[c-1]=48+d;
		}
		//cout<<a;
		else
		{
			countnum(c,d);
		}
	}
}
	
	
