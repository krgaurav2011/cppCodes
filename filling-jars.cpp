
#include <iostream>
#include <cstdio>
using namespace std ;
#define lli long long unsigned int

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
inline void inp(long long unsigned int &n )//fast input function
{
n=0;
int ch=getchar();
int sign=1;
while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getchar();}
while( ch >= '0' && ch <= '9' )
n = (n<<3)+(n<<1) + ch-'0', ch=getchar();
n=n*sign;
}

int main()
{
	lli n,m,a,b,av,k,sum=0,temp;
	inp(n);
	inp(m);
	
	while(m--)
	{
		inp(a);
		inp(b);
		inp(k);
		temp = (b-a+1)*k;
		sum+=temp;
		
		
	}
	av=sum/n;
	cout<<av;
}
