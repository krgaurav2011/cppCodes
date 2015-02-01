#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007
int main()
{
	lli x, y,t,n,sum,i;
	cin>>x>>y;
	cin>>t;
	while(t--)
	{
		sum=1;
		cin>>n;
		if(n==1)
		{
			cout<<(x-y)%MOD<<endl;
		}
		else{
		for(i=0;i<n;i++)
		{
			sum= sum*x -y;
		}
		cout<<sum%MOD<<endl;
	}}
}
