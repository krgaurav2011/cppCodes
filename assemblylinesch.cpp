/* Assembly Line Scheduling
 * DP Reference : Introduction to Algorithm , CLRS Book (Page 323)
 * Date : DEC11,2014
 * Kumar Gaurav
 */
 
#include <iostream>
using namespace std;
#define NS 4    //number of stations 
#define NP 2	//number of path(lines)

void printpathrec(int l[2][3],int n,int L)								//recursively prints the path followed
{
	int z;
	if(n==0)
		return;
	if(n==NS)
		z=L;
	else
		z= l[L-1][n-1];
	printpathrec(l,n-1,z);
	cout<<"line "<<z<<" ,Station "<<n<<endl;
}
																		
void printpath(int l[2][3],int n,int L)									//non recursively prints the path followed 
{
	int i;
	i=L;
	cout<<"\nline "<<i<<" ,Station "<<n<<endl;
	for(int j=NS-1;j>=1;j--)
	{
		i=l[i-1][j-1];
		cout<<"line "<<i<<" ,Station "<<j<<endl;
		}
	
	}
void printFtable(int f[NP][NS])											//prints f values
{
	cout<<"Values of F :"<<endl;
	for(int p=0;p<NP;p++)
	{
		for(int q=0;q<NS;q++)
		{
			cout<<f[p][q]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
}
void printLtable(int l[NP][NS-1])										//prints l values
{
	cout<<"Values of L :"<<endl;
	for(int p=0;p<NP;p++)
	{
		for(int q=0;q<NS-1;q++)
		{
			cout<<l[p][q]<<"\t";
		}
		cout<<endl;
	}
}	
void assembly(int a[2][4],int t[2][3],int e[2] ,int x[2]) 				//function to constuct the l and f table in O(n)
{
	int f[NP][NS];
	int l[NP][NS-1];
	int j,L,F;
	f[0][0]=e[0]+a[0][0];
	f[1][0]=e[1]+a[1][0];
	for(j=1;j<NS;j++)
	{
		if(f[0][j-1]+ a[0][j] <= f[1][j-1]+t[1][j-1]+a[0][j]){
			f[0][j] = f[0][j-1]+ a[0][j];
			l[0][j-1]=1;
		}
		else{
			f[0][j] = f[1][j-1]+t[1][j-1]+a[0][j];
			l[0][j-1]=2;
		}
		
		if(f[1][j-1]+ a[1][j] <= f[0][j-1]+t[0][j-1]+a[1][j]){
			f[1][j] = f[1][j-1]+ a[1][j];
			l[1][j-1]=2;
		}
		else{
			f[1][j] = f[0][j-1]+t[0][j-1]+a[1][j];
			l[1][j-1]=1;
		}
		if(f[0][NS-1]+x[0] <= f[1][NS-1]+x[1]){
			F=f[0][NS-1]+x[0];
			L=1;
		}
		else{
			F=f[1][NS-1]+x[1];
			L=2;
		}
				
	}
	printFtable(f);														//printing the f values 
	printLtable(l);														// printing the l values
	
	cout<<"\nl* is : "<<L;
	cout<<"\nf* is : "<<F<<endl<<endl;
	cout<<"The Path followed is : "<<endl;
	printpathrec(l,NS,L);									 			// this line uses recursive printpath function 
	//printpath(l,NS,L);                                     			//uncomment this line to use the non recursive printpath function
		
}

int main()
{
	int a[2][4]= {{4,5,3,2},{2,10,1,4}};
	int t[2][3]= {{7,4,5},{9,2,8}};
	int x[2]={18,7};
	int e[2]={10,12};
	assembly(a,t,e,x);
}
