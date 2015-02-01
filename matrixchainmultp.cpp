/* Matrix Chain Multiplication 
 * DP 
 * Reference : Introduction to Algorithm , CLRS Book (Page 331)
 * 			   www.geeksforgeeks.org/dynamic-programming-set-8-matrix-chain-multiplication/index.html	
 * Date : DEC132014
 * Kumar Gaurav
 */
#include <bits/stdc++.h>
using namespace std;
int s[4][4];															//to store the splits	
void printoptimalparens(int i,int j)									//function to check the splits and print the parenthesis
{
	if(i==j)
		cout<<"A"<<i;
	else
	{
		cout<<"(";
		printoptimalparens(i,s[i][j]);
		printoptimalparens(s[i][j]+1,j);
		cout<<")";
	}	
}
int matrixchainorder(int p[],int n)										//function to find find the number of multiplications . O(N^3) Still better than naive sol. that requires exponential time
{
	int m[n][n];
	
	int i,j,k,L,q;
	for(i=1;i<n;i++)													//Put  m[i][i] = 0 because cost is zero when multiplying 1 matrix.
		 m[i][i] = 0;
	for(L=2;L<n;L++)
	{
		for(i=1;i<n-L+1;i++)
		{
			j=L+i-1;
			m[i][j]=INT_MAX;
			for(k=i;k<=j-1;k++)
			{
				q=m[i][k]+m[k+1][j]+ p[i-1]*p[k]*p[j];					//calculating the number of multiplications
				if(q<m[i][j])
				{
					m[i][j]=q;
					s[i][j]=k;											//setting splits
				}	
			}
		}	
	}	 
	return m[1][n-1];													//returning the minimum value top right corner of the m matrix:  m[1][n-1]
	
}

int main()
{
	int p[4] = {1,2,3,4};												//p[] array showing the dimensions of the 3 matrices
	cout<<"Minimum number of multiplications is :"<<matrixchainorder(p,4)<<endl;
	cout<<"The order of parenthesization is: ";
	
	printoptimalparens(1,3);
}
