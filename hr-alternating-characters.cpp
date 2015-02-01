/* Alternating Characters  
 * O(n) : Easy -Warmup 
 * Reference : https://www.hackerrank.com/challenges/alternating-characters
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
		char curr=a[0];
		ll count=0;
		for(ll i=1;i<strlen(a);i++)
		{
			if(a[i]==curr)
				count++;
			else
				curr=a[i];
		}
		cout<<count<<endl;
	}
}	
