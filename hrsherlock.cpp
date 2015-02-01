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
    lli n,m,a[100000],b[100000],c[100000],i,j;
    inp(n);
    inp(m);
    for(i=0;i<n;i++)
		inp(a[i]);
    for(j=0;j<m;j++)
		inp(b[j]);
	for(j=0;j<m;j++)
		inp(c[j]);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			
			if ((j+1)%b[i] == 0)
				a[j]=a[j]*c[i];	
				//count++
		}
	}
	for(i=0;i<n;i++){
		cout<<mod(a[i])<<" ";
		}	
}		
