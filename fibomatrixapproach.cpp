#include <bits/stdc++.h>

using namespace std;
int F[2][2]= {{1,1},{1,0}};
void multiply(int F[2][2],int J[2][2])
{
	int x =  F[0][0]*J[0][0] + F[0][1]*J[1][0];
	int y =  F[0][0]*J[0][1] + F[0][1]*J[1][1];
	int z =  F[1][0]*J[0][0] + F[1][1]*J[1][0];
	int w =  F[1][0]*J[0][1] + F[1][1]*J[1][1];	
	F[0][0] = x;
	F[0][1]=y;
	F[1][0]=z;
	F[1][1]=w;
	
}
void power(int k)
{
	//int i;
	int M[2][2]={{1,1},{1,0}};
	if(k<=1)
		return;
	else
		{
			power(k/2);
			multiply(F,F);
		}
	if(k%2!=0)
		multiply(F,M);
	
	
}

int fibo(int n)
{
	//int i;
	if(n<=1)
		return n;
	else
		power(n-1);
		
	
		return F[0][0];
}

int main()
{
	 
	int n;
	cin>>n;
	cout<<endl<<fibo(n+1);
	return 0;
}

