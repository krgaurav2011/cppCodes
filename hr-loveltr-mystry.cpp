/* Love Letter Mystry 
 * O(n) : Easy -Warmup 
 * Reference : https://www.hackerrank.com/challenges/the-love-letter-mystery
 * Date : JAN17,2015
 * Kumar Gaurav
 */
#include <bits/stdc++.h>
using namespace std ;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		char a[100005];
		cin>>a;
		ll count=0;
		ll len =strlen(a);
		for(ll i=len-1;i>=len/2;i--)
		{
			if(a[i]!=a[len-i-1])
				count+= abs(a[i]-a[len-i-1]);
		}
		cout<<count<<endl;
	}
}	
