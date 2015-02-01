#include <iostream>
using namespace std;

int main()
{
    long int sum=0,n,max=0,x;
	cin >> n;	
	for(int j=0;j<n;j++)
	{
		cin >> x;
		sum+=x;
		if(sum<0)
			sum=0;
		if(sum>max)
			max=sum;
	}
	cout<<max;
}
