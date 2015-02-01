/* Stock maximisation 
 * O(n) :DP   //another implementation has a complexity O(n^2)
 * Reference : https://www.hackerrank.com/challenges/stockmax
 * Date : JAN16,2015
 * Kumar Gaurav
 */

#include <bits/stdc++.h>
using namespace std ;
#define ll long long int

ll max(ll x, ll y)
{ 
	return (y > x)? y : x; 
}

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		ll m=0;
		ll profit=0;
		for(ll i=n-1;i>=0;i--)
		{
			if(m<=a[i])
				m=a[i];
			profit+=m-a[i];	
		}
		cout<<profit;
		
	}
}		
