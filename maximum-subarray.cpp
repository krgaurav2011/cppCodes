/* Maximum Sub-array problem (using Kadane Algrithm)  
 * O(n) :DP   //another implementation has a complexity O(nlogn)
 * Reference : http://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
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
		ll curr_max=a[0];
		ll max_so_far=a[0];
		
		for(ll i=1;i<n;i++)
		{
			curr_max = max(a[i],curr_max+a[i]);
			max_so_far = max(max_so_far,curr_max);
		}
		
		cout<<max_so_far<<endl;
		
		
	}
}	
