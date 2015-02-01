#include <bits/stdc++.h>

using namespace std ;
#define lli long long unsigned int

lli a[1011];
int n;

int countaboveavg(lli x)
{
	int l=0;
	int u = n-1;
	int mid;
	int flag=0;
	//cout<<"hello";
	//cout<<l<<"   "<<u<<"    "<<n;
	if(a[l]==a[u])
		return 0;
	while(l<u)
	{
		mid =(l+u)/2;
		if(x>a[mid])
			l=mid+1;
		else if(x<a[mid])
			u=mid-1;
		else if(x==a[mid])
		{
			flag=1;
			break;
		}	
	}
        if(flag==1)
        {
             while(a[mid+1]==x)
                mid++;
        }
        if(a[mid]>x)
        {
			return n-mid;
			}
		
	
		return n-mid-1;
	
	
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		lli count=0;
		lli sum=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{	
			cin>>a[i];
			sum+=a[i];
			count++;
		}	
		sort(a,a+n);
		lli avg=sum/count;
		//cout<<avg;
		int k = countaboveavg(avg);
		cout<<k<<endl;		
	}
}
