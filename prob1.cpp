#include <bits/stdc++.h>

using namespace std;
#define lli unsigned long long int

int main()
{
	lli n;
	cin>>n;
	lli i=0;
	lli a[100000],ma,mi;
	while(i<n)
	{
		cin>>a[i];
		i++;
		}
	sort(a,a+n);
	ma = a[n-1]- a[0];
	mi = a[1] - a[0];
	lli count=1;
	lli count2=1;
	for (i=1;i<n-1;i++)
	{
		if(mi==0)
		{
			while(a[i]==a[i+1])
				i++;
		}
		else if(a[i+1] - a[i] < mi)
		{
			mi = a[i+1] - a[i];
			//cout<<i<<"hrllo"<<mi<<endl;
			count=1;
		}
		else if(a[i+1]-a[i] == mi)
		{
			//cout<<i;
			count++;
		}
	}	
	cout<<count<<" "<<count2;		
}
