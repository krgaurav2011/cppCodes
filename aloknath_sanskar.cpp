#include <bits/stdc++.h>
using namespace std ;
#define lli long long unsigned int

void powerset(lli set[], lli set_size,lli Z,lli k)
{
    /*set_size of power set of a set with set_size
      n is (2**n -1)*/
    lli pow_set_size = pow(2, set_size);
    lli counter, j,countset=0;
 
    /*Run from counter 000..0 to 111..1*/
    for(counter = 0; counter < pow_set_size; counter++)
    {
		lli temp=0;
      for(j = 0; j < set_size; j++)
       {
          /* Check if jth bit in the counter is set
             If set then add the jth element from set to temp */
          if(counter & (1<<j))
				temp+=set[j];
			
       }
       if(temp==Z)
					countset++;
      
    }
    if(countset>=k)
		cout<<"yes\n";
	  else 
		cout<<"no\n";
}

int main()
{
	int t;
	cin>>t;
	
	assert(t>=1 && t<=10);
	while(t--)
	{
		lli a[22];
		lli n,k;
		lli sum =0;
		cin>>n>>k;
		assert(n>=1 && n<=21);
		assert(n>=1 && k<=8);
		for(lli i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		sort(a,a+n);
		//cout<<sum;
		//cout<<a[n-1];
		if(sum%k!=0 || (sum/k)< a[n-1])
		{
			cout<<"no\n";
			//return 0;
		}
		else{
		//int p,q;
			lli Z=sum/k;
			powerset(a,n,Z,k);
		}
	}
	
}

