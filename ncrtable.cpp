/* Binomial coefficients
 * DP 
 * Reference : https://www.hackerrank.com/challenges/ncr-table	
 * Date : DEC15,2014
 * Kumar Gaurav
 */
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000000
using namespace std ;


ll t[1005][1005];
void inittable()
{
	ll i,j;
	for(i=1;i<=1000;i++){
		for(j=0;j<=i;j++){
			if(i==0)
				t[i][j]=1;
			if(j==0 || i==j)
				t[i][j]=1;
			else
				t[i][j]=(t[i-1][j-1]+t[i-1][j])%MOD;
		}
	}
	
	 
}	

void binomialcoeff(ll n)
{
	for(ll i=0;i<=n;i++)
	{
		cout<<t[n][i]<<" ";
	}
	cout<<endl;
}


int main()
{
	int t;
	cin>>t;
	inittable();
	while(t--)
	{
		ll n;
		cin>>n;
		binomialcoeff(n);
	}
}

