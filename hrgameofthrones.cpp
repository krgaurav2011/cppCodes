#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define lli long long int


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


int main()
{
	lli n,c,m,ch,nch,wr;
	int t;
	
	inp(t);
	while(t--)
	{
		inp(n);
		inp(c);
		inp(m);
		ch = n/c;
		wr = ch;
		while(wr>=m)
		{
			nch= wr/m;
			wr-=(nch*m);
			ch+=nch;
			wr+=nch;
		}
		cout<<ch<<endl;
	}	
}
