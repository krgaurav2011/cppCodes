// Fenwick Trees / BIT 
// O(logn)
// Kumar Gaurav 	Jan26,2015
// More on Fenwick Trees nad implementation : https://kartikkukreja.wordpress.com/2013/12/02/range-updates-with-bit-fenwick-tree/

#include <bits/stdc++.h>
using namespace std ;
#define ll long long int
ll t,n,a[1000005],tree[1000005];
void init_tree()
{
	ll j,k;
	for(ll i=1;i<=n;i++)
	{
		j=a[i];
		k=i;
		while(k<=n)
		{
			tree[k]+=j;
			k=k+(k&(-k));
		}
	}	
}
ll sum(ll k)
{
	ll sum=0;
	
		while(k>0)
		{
			sum+=tree[k];
			k=k-(k&(-k));
		}
		return sum;
		
}
void update(ll k, ll j)
{
	
	while(k<=n)
	{
			tree[k]+=j;
			k=k+(k&(-k));
	}
}
int main()
{
	n=10;
	for(ll i=1;i<=n;i++){
		a[i]=rand()%30;
		//cout<<a[i];
	}
   // n= sizeof(a)/sizeof(a[1]);
    init_tree();
    cout << "Sum of elements in arr[0..5] is "
         << sum(5+1);
 
    // Let use test the update operation
 
   update(3+1,6); //Update BIT for above change in arr[]
 
   cout << "\nSum of elements in arr[0..5] after update is "<< sum(5+1);

	
}
