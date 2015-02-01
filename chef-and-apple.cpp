#include <bits/stdc++.h>
using namespace std ;
#define lli long long unsigned int
lli mtime=0;
void findt(lli a[],lli n,lli l)
{
	//cout<<"kkkhhhh";
	
	
		lli i=l,j,z,k;
		lli count=1;
		if(a[0]==a[n-1])
		{
			//cout<<"dall"<<endl;
			for(z=0;z<count;z++)
			{
				a[z]=0;	
			}
			mtime++;
			return;
		}
		while(a[i+1]==a[i])
		{
			count++;
			i++;
		}
		
		if(a[i]!=a[0])
		{
			//cout<<"hrlll";
			//k=i;
			k=i-count+1;
			for(j=0;j<count && j<k;j++)
			{
				a[k+j]=a[k-j-1];
			}
			i=k+j-1;
			mtime++;	
		}
		for( z=0;z<n;z++)
		{
			cout<<a[z]<<endl;
			}
		findt(a,n,i+1);
		
		
		
		
		
	
		
		
		//
		//findt(a,n);
	
	//cout<<mtime<<endl;
	
	
}



int main()
{
	int t;
	cin>>t;
	
	assert(t>=1 && t<=10);
	while(t--)
	{
		lli a[100009];
		lli n;
		cin>>n;
		//assert(n>=1 && n<=20);
		//assert(k>=1);
		for(lli i=0;i<n;i++)
		{
			cin>>a[i];
			//assert(a[i]<=1000);
		}
		//cout<<"kkk";
		mtime=0;
		sort(a,a+n);
		findt(a,n,0);
		
		cout<<mtime<<endl;
		//return 0;
	}
}
