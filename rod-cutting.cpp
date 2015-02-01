//DP
//Kumar Gaurav 	 	Jan 15/2015



#include <bits/stdc++.h>
using namespace std ;
#define ll long long int
void cutrod(int *a, int n)
{
	int val[n+1];
	val[0]=0;
	int i,j;
	for(i=1;i<=n;i++)
	{
		int max_val=0;
		for(j=0;j<i;j++)
		{
			max_val=max(max_val,a[j]+val[i-j-1]);
		}
		val[i]=max_val;
	}
	cout<<val[n];
	
	
}

int main()
{
	int n,a[100005];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cutrod(a,n);
	
	
	
	
}

