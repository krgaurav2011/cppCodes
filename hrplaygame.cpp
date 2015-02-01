/* Given an array choose one or two or three elements and maximize sum .Game is played optimally.
 * DP 
 * Reference : https://www.hackerrank.com/challenges/play-game
 * Date : DEC15,2014
 * Kumar Gaurav
 */

#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000000
using namespace std ;

ll max(ll x, ll y)
{
	return x>y?x:y;
}

ll maxgame(ll a[],ll n)
{
	ll sum[n];
	sum[0]=a[0];
	for(ll i=1;i<=n;i++)
	{
		sum[i]=sum[i-1]+a[i];
	}
	ll p[n];
	p[0]=a[0];
	p[1]=p[0]+a[1];
	p[2]=p[1]+a[2];
	for(ll i=3;i<n;i++)
	{
		ll x= sum[i-1]+a[i]-p[i-1];
		ll y= sum[i-2] + a[i] + a[i-1] -p[i-2];
		ll z= sum[i-3] + a[i] + a[i-1] + a[i-2] -p[i-3];
		p[i]=max(x,max(y,z));
		
		}
	return p[n-1];
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		ll a[100009];
		cin>>n;
		for(ll i=n-1;i>=0;i--)
			cin>>a[i];	
		cout<<maxgame(a,n)<<endl;
	}
}

