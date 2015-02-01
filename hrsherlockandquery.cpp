
#include <iostream>
#define lli long long int
#define MOD(a) a%1000000007
using namespace std;

int main()
{
	lli m,n,A[100005],B[100005],C[100005];
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>A[i];
	for(int i=0;i<m;i++)
		cin>>B[i];
	for(int i=0;i<m;i++)
		cin>>C[i];	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			 if ((j+1) % B[i] == 0)
				A[j] = (A[j]*C[i])%1000000007;
		}
	}
	
   		for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
}
