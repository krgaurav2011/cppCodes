#include <iostream>
#define lli int
using namespace std;
int B[10000]={0};
void findn(int p)
{
	int i;
	B[0]=2;
	for(i=1;B[i-1]+i+1<p;i++)
	{
		B[i]=B[i-1]+i+1;
	}
	cout<<i+1<<endl;
	/*for(i=0;i<10;i++)
	{
		cout<<B[i];
	}*/
	
}
int main()
{
	int t,p;
	cin>>t;
	while(t--)
	{
		cin>>p;
		findn(p);
		
	}
}
