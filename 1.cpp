#include <iostream>
#include <math.h>
using namespace std ;

int checkpow(int n)
{
	unsigned int temp=n;
	if(n==1)
		return 1;
	else if((n & (n - 1)) == 0)
		return temp/2;
	else
		return temp - pow(2,floor(log(temp)/log(2)));
	
}

int main()
{
	unsigned int n,j=0;
	int a[11],t,i=0;
	cin>>t;
	if(t>10 || t<1)
		return 0;

	for(i=0;i<t;i++)
	{
		cin>>n;
		if(n<1 || n>4294967295)
			return 0;
		else if(n==1)
		{
			a[i]=1;
			//cout<<"Richard\n";
		}
		else
		{		
			for(j =1;j<=n;j++)
			{
				
				n=checkpow(n);
				if(n==1)
				{
					break;
				}

			}
			if(j%2==0 && j!=0)
				a[i]=1;
				//cout<<"Richard\n";
			else
				a[i]=0;
				//cout<<"Louise\n";
		}
	}
	for(int k=0;k<t;k++)
	{
		if(a[k]==1)
			cout<<"Richard\n";
		else
			cout<<"Louise\n";
			
	}		
}
