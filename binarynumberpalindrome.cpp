#include <bits/stdc++.h>
using namespace std;
int iskthset(unsigned int num,int k)
{
	return (num & (1<<(k-1))) ;
}
int main(void)
{
	unsigned int num;
	int i;
	int l =1;
	int r = sizeof(unsigned int)*2;
	num= 1<<8 +1;
	if((1<<31)== pow(2,3))
		cout<<"yesssssssssss";
	for(i=l;l<r;i++)
	{
		if(iskthset(num,l) != iskthset(num,r))
			{
				cout<<"no";
				return 0;
		}
		l++;
		r--;	
	}
	cout<<"yes";
	return 1;
}	
	
