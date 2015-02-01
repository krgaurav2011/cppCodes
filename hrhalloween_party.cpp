#include <iostream>
#include <cstdio>
#include <cstring>

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
	lli k,k1,k2;
	int t;
	inp(t);
	while(t--)
	{
		inp(k);
		if(k%2==0)
			cout<<(k/2)*(k/2)<<endl;
		else{
			k1 = k/2;
			k2 =k-k1;
			cout<<k1*k2<<endl;
		}	
	}
}
