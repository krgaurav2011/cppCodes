/*FEB LONG CONTEST
 * Kumar Gaurav Feb7,2015
 * www.codechef.com/FEB/15/problems/RANKLIST 
 */
 
#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
	ll n,s;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>s;
		ll i=0;
		ll orig=(n*(n+1))/2;
		//cout<<orig;
		if(orig==s)
			cout<<"0"<<endl;
		else
		{	
			while((orig-n)>=s)
			{
				
				i++;
				orig-=n;
				n--;
				
			}
			cout<<i+1<<endl;
		}
	}

}
