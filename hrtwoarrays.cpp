/* Two-array
 * Arrays 
 * Reference : https://www.hackerrank.com/challenges/two-arrays
 * Date : DEC172014
 * Kumar Gaurav
 */


#include <bits/stdc++.h>
#define ll long long unsigned int
#define MOD 1000000000
using namespace std ;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k,a[1009],b[1009];
		cin>>n>>k;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(ll i=0;i<n;i++)
		{
			cin>>b[i];
		}
		sort(a, a+n,greater<int>());
		sort(b,b+n);
		
			ll flag=1;
			ll i=0;
			while(flag && i<n){
				if(a[i]+b[i]<k)
					flag=0;
				i++;	
			}
			if(flag)
				cout<<"YES\n";
			else
				cout<<"NO\n";
			
	}
	
}
