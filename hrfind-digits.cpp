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
	lli t,num,count=0,r,temp;
	inp(t);
	while(t--)
	{
		count=0;
		inp(num);
		temp=num;
		while(num>0){
			r=num%10;
			//temp = num;
			num=num/10;
			if(r!=0 && temp%r ==0 )
			count++;
		}
		cout<<count<<endl;
	}
	
}
