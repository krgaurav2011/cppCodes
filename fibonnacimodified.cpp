/* Fibonnaci-modified T(n)= T(n-1)^2+Tn
 * DP 
 * Reference : https://www.hackerrank.com/challenges/play-game
 * Date : DEC15,2014
 * Kumar Gaurav
 */

#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000000
using namespace std ;
ll a[10000];

void fibmod(ll n)
{
	ll i;
	for(i=2;i<=n-1;i++)
	{
		a[i]=a[i-1]*a[i-1] + a[i-2];
		//cout<<a[i]<<endl;
	}
	cout<<a[i-1]<<endl;
}

int main()
{
	ll n;
	cin>>a[0]>>a[1]>>n;
	fibmod(n);
	
}
