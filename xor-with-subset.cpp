 /* KUMAR GAURAV
 * DEC20,2014*/


#include <bits/stdc++.h>
using namespace std ;
#define lli long long unsigned int

void xorset(lli set[], lli set_size,lli k)
{
    /*set_size of power set of a set with set_size
      n is (2**n -1)*/
    lli pow_set_size = pow(2, set_size);
    lli counter, j;
    lli res=0;
 
    /*Run from counter 000..0 to 111..1*/
    for(counter = 0; counter < pow_set_size; counter++)
    {
		lli temp=0,flag=0;
      for(j = 0; j < set_size; j++)
      {
          if(counter & (1<<j))
          {
			  if(flag==1)
			  {
				   temp=temp^set[j];
				  }
				 
			  else{
				temp=set[j];
				flag=1;
				}
		  }
		}  
       temp=temp^k;
       if(res<=temp)
       {
			res=temp;
		}	
    }
    cout<<res<<endl;
}

int main()
{
	int t;
	cin>>t;
	
	assert(t>=1 && t<=10);
	while(t--)
	{
		lli a[1010];
		lli n,k;
		cin>>n>>k;
		//assert(n>=1 && n<=20);
		//assert(k>=1);
		for(lli i=0;i<n;i++)
		{
			cin>>a[i];
			//assert(a[i]<=1000);
			
		}
			xorset(a,n,k);
	}
}
	



