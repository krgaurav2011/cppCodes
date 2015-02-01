
/* Moderate Problem ,Combinitorics
 * Given number of 0,s and 1,s Find the number of digits starting with 1 .
 * Ref :https://www.hackerrank.com/challenges/sherlock-and-permutations
 * Date: DEC11,2014 Kumar Gaurav
 */ 


//problem reduces to calculating (n-m+1)Cr % MOD

#include <bits/stdc++.h>
#define lli long long 
#define MOD 1000000007
using namespace std ;
lli fac[2009];
lli modpow(lli a,lli b)   												//to calculate a^b mod MOD (modular exponential)
 {
    lli res=1;
    while(b)
    {
        if(b%2)
               res=(res*a)%MOD;
                cout<< res;
        b=b/2;
        a=(a*a)%MOD;
    }
   return res;
}

int main()
{
	lli t;
	cin>>t;
    lli fac[2009];
	fac[0]=1;
	fac[1]=1;
	for(lli i=2;i<2001;i++)
		fac[i]=(fac[i-1]*i)%MOD;
	while(t--)
	{
		lli m,n,den;
		cin>>n>>m;
        den=(fac[m-1]*fac[n])%MOD;
        //cout<<den<<" ";
        den=modpow(den,MOD-2);
       // cout<<den<<endl;
        cout<<(fac[n+m-1]*den)%MOD<<"\n";
	}
    return 0;
}

