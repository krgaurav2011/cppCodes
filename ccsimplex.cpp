#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	lli t,n,a[100000],count=0,neg=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<0)
				neg++;
		}
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			//cout<<a[i];
			if(a[i]<0)
			{
				for(int j=neg;a[j]<=abs(a[i]);j++)
				{
					if(a[i]+a[j]==0)
						count++;
				}
			}	
		}
		cout<<count<<endl;
		
	}
}
