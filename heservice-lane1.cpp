#include <iostream>
#include <cstdio>



inline void inp( int &n )//fast input function
{
n=0;
int ch=getchar();
int sign=1;
while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getchar();}
while( ch >= '0' && ch <= '9' )
n = (n<<3)+(n<<1) + ch-'0', ch=getchar();
n=n*sign;
}
inline void inp(long long int &n )//fast input function
{
n=0;
int ch=getchar();
int sign=1;
while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getchar();}
while( ch >= '0' && ch <= '9' )
n = (n<<3)+(n<<1) + ch-'0', ch=getchar();
n=n*sign;
}


using namespace std;

#define lli long long int

int main()
{
	lli n,t;
	//int n,t
	inp(n);
	inp(t);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		inp(arr[i]);
	}
	while(t--)
	{
		int a,b;
		inp(a);
		inp(b);
		int min=arr[a];
		for(int i=a+1;i<=b;i++)
		{
			if(a<min)
				min=a;
		}
		cout<<min<<endl;
}
}
