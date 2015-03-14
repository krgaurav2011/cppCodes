/*FEB LONG CONTEST
 * Kumar Gaurav Feb7,2015
 * www.codechef.com/FEB/15/problems/CHEFCH 
 */
 
#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n+1];
		ll b[100005]={0};
		ll max=-1;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			b[a[i]]++;
			if(b[a[i]]>max)
				max=b[a[i]];
		}
		//sort(b,b+n);
		for(ll i=1;i<=100001;i++)
		{
			if(b[i]>max)
				max=b[i];
			//cout<<b[i];
		}
		//cout<<max<<endl;
		cout<<n-max<<endl;
	}
}
