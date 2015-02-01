//Codecracker.in
//Jan31,2015
//Few test cases TLE


#include <bits/stdc++.h>
using namespace std ;
#define ll long long int


int main()
{
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		char instr[1005];
		cin>>instr;
		int loc=0,i=0;
		while(i<strlen(instr))
		{
			if(instr[i++]=='R')
			{
				loc++;
				direction=2;
				
			}
			else if(instr[i++]=='L')
			{
				loc--
				direction=1;
			}
			else if(instr[i++]=='P')
			{
				if(direction==2)
				{
					a[loc]--;
					
				}
			}
		
	}
}
	
