//JAN 2015 LONG 

#include <bits/stdc++.h>
using namespace std ;
#define ll long long int


bool isSubsetSum(ll set[], ll n, ll sum)
{
    // The value of subset[i][j] will be true if there is a subset of set[0..j-1]
    //  with sum equal to i
    bool subset[sum+1][n+1];
 
    // If sum is 0, then answer is true
    for (ll i = 0; i <= n; i++)
      subset[0][i] = true;
 
    // If sum is not 0 and set is empty, then answer is false
    for (ll i = 1; i <= sum; i++)
      subset[i][0] = false;
 
     // Fill the subset table in botton up manner
     for (ll i = 1; i <= sum; i++)
     {
       for (ll j = 1; j <= n; j++)
       {
         subset[i][j] = subset[i][j-1];
         if (i >= set[j-1])
           subset[i][j] = subset[i][j] || subset[i - set[j-1]][j-1];
       }
     }
 
    /* // uncomment this code to print table
     for (int i = 0; i <= sum; i++)
     {
       for (int j = 0; j <= n; j++)
          printf ("%4d", subset[i][j]);
       printf("\n");
     } */
 
     return subset[sum][n];
}

int main()
{
	ll t;
	scanf("%lld",&t);
	while(t--)
	{
		ll n,k,a[100005],set[100005],z;
		cin>>n>>k;
		for(ll i=0;i<n;i++)
		{
			
			a[z]=0;
		}
		for(ll i=0;i<k;i++)
		{
			cin>>z;
			//missing[i]=z;
			a[z]=-1;
		}
		ll q=0;
		for(ll i=1;i<=n;i++)
		{
			if(a[i]==0)
				set[q++]=i;
		}
		/*for(ll i=0;i<q;i++)
		{
			
				cout<<set[i];
		}*/
		ll i=1;
		while(1)
		{
			if (isSubsetSum(set, n-k,i) == true)
				i++;
			else
				{
					if(i%2==0)
					{
						cout<<"Mom\n";
						break;
					}
					else
					{
						cout<<"Chef\n";
						break;
					}
				}
		}
		
		
	}
}
