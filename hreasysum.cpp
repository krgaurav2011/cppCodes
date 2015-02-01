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
    lli n,t,m,q,r;
    lli i=0;
    lli sum=0,esum=0;
    inp(t);
    while(t--)
    {
        sum=0;
        esum=0;
        i=0;
        inp(n);
        inp(m);
        q=n/m;
        r=n%m;
        sum = (m*(m-1)*q)/2;
		esum = r*(r-1)/2;
        //sum = sum*q;
        sum = sum + esum;
        printf("%llu\n",sum);
    }

}
