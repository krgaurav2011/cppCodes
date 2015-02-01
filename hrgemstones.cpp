#include <iostream>
#include <cstdio>
#include <cstring>


using namespace std;

int main()
{
	char arr[101][101],gem;
	int n,i=0,j,num,k,z;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	num = strlen(arr[0]);
	int totalgem=0;
	for(i=0;i<num;i++)
	{
		gem = arr[0][i];
		int count = 0;
		for(z=0;z<i;z++){
			if(gem==arr[0][z])
				count--;
		}
		for(j=0;j<n;j++)
		{
			int len = strlen(arr[j]);
			for(k=0;k<len;k++)
			{
				if(arr[j][k]==gem)
				{
					count++;
					break;
				}
			}
			if(count==n)
			 totalgem++;
		}
	}
	cout<<totalgem;		 
}
	
