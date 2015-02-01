#include <bits/stdc++.h>
using namespace std ;
#define lli long long unsigned int
#define err -1
#define ccat(a,b) a ## b

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
	int n,test;
	inp(test);
	
	while(test--)
    {
        scanf("%d",&n);
        string ks;
        for(int j=n;j>=0;j--)
        {
            if(j%3==0 && (n-j)%5==0)
            {
                ks="";
                for(int k=0;k<j;k++)
                    ks+='5';
                for(int k=0;k<n-j;k++)
                    ks+='3';
                break;
            }
        }
        if(ks=="")
            cout<<"-1\n";
        else
            cout<<ks<<endl;
    }
		
		return 0;
}

