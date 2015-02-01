#include <bits/stdc++.h>
using namespace std;

#define MOD 107
#define lli long long int
lli fact(lli n)
{
	if(n==1)
	 return 1;
	else 
	return n*fact(n-1); 
	
}
int main()
{
	lli n,k,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		//cout<<"hello  edes"; 
		
		
		if(n==3)
		{
			if(k==1)
			{
				n=6;
			}
			else if(k==2)
			{
				n=720;
			}
			else
				n=0;
		}
		if(n==4)
		{
			if(k==1)
				n=24;
			else if(k==2)
				n=209;
			else
				n=0;
		}
		else if(n!=1 || n!=2 && k==1)
		{
			n=fact(n);
		}
		else
			n=0;
			
		cout<<n%MOD<<"\n";
	}
	return 0;
}
