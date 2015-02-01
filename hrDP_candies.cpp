#include <iostream>
#define lli int
using namespace std;

int main()
{
	lli n,i,A[1000001],B[1000001];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	lli count=1;
	B[0]=1;
	for(i=1;i<n;i++)
	{
		if(A[i]>A[i-1])
		{
			B[i]=B[i-1]+1;
			
		}	
		else 
		{
			B[i]=1;
		}
		count+=B[i];
		//cout<<B[i]	;
	}
	for(i=n;i>0;i--)
	{
		
		if(A[i-1] > A[i] && B[i-1] <= B[i])
		{
			count-=B[i-1];	
			B[i-1]= B[i]+1;
			count+=B[i-1];
		}
		
		//cout<<B[i];	
	}
	/*for(i=0;i<n;i++)
	{
		cout<<B[i];
	}*/
	
	cout<<count;
	
}
