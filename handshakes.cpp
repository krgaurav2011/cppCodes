/* Easy Problem ,Combinitorics
 * No. of handshakes between n people.
 * Ref : https://www.hackerrank.com/challenges/handshake
 * Date: DEC11,2014 Kumar Gaurav
 */ 
#include <bits/stdc++.h>
#define lli long long int
using namespace std ;

int main()
{
	lli t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<(n*(n-1))/2;
		
	}
	
}
