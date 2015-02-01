#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,t,j,max;
	int a[100000];
	cin>>t;
	while(t--)
	{
		int i=0;		
		cin>>n;
		while(i<n)
		{
			cin>>a[i];
			i++;
		}
		max=0;
		for(i=0;i<n;i++)
		{
			for(j=n-1;j>=i+max;j--)
			{
				if(a[i]==a[j])
					max = j-i+1;
			}
		}
		cout<<max<<endl;
	}
}
