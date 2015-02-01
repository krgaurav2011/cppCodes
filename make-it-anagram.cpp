#include <bits/stdc++.h>
using namespace std ;

int main()
{
	int t;
	cin>>t;
	char a[10005],b[10005];
	int count=0;
	gets(a);
	gets(b);
		//cin>>a;
	int m = strlen(a);
	int n= strlen(b);
		cout<<"lengths are : \n"<<m<<n;
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				
				b[j]-=32;
				//cout<<a[j]<<" ";
				count++;
				break;
			}
			//		cout<<a<<endl;
		}
	}
	cout<<count<<endl;
			//if(t!=1)
		cout<<m+n-(2*count)<<endl;
		
}
		
