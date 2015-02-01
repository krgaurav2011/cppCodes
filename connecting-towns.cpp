/* Easy Problem ,Combinitorics
 * No. of path between 	2 cities .
 * Ref :https://www.hackerrank.com/challenges/connecting-towns
 * Date: DEC11,2014 Kumar Gaurav
 */ 
#include <bits/stdc++.h>
#define lli long long int
#define MOD 1234567
using namespace std ;

int main()
{
	int t,n,a;
	cin>>t;
	while(t--)
	{
		lli sum=1;
		cin>>n;
		for(int i=0;i<n-1;i++)
		{
			cin>>a;
			sum=sum*a;
		}
		cout<<sum%1234567<<endl;
	}
}
