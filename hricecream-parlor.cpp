/* Ice-Cream parlor
 * Arrays 
 * Reference :https://www.hackerrank.com/challenges/icecream-parlor
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
		ll n,m,a[100009];
		cin>>m>>n;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		//sort(a,a+n);
		ll flag=0;
		for(ll i=0;i<n;i++)
		{	
			if(a[i]<m){
			
				for(ll j=i+1;j<n;j++)
				{
					if((a[j]+a[i])==m){
							cout<<i+1<<" "<<j+1<<endl;
							//cout<<j;
							flag=1;
							break;
					}
				}
				if(flag==1)
					break;	
			}
		}	
	} 
		
}	
