// Implementation of Fenwick Trees 
// REF: http://www.codechef.com/problems/MARBLEGF
// O(logn)
// Kumar Gaurav Jan26,2015


#include <bits/stdc++.h>
using namespace std ;
#define ll long long int

ll t,n,a[1000005],tree[1000005];

void init_tree()
{
	ll j,k;
	for(ll i=1;i<=n;i++){
		j=a[i];
		k=i;
		while(k<=n){
			tree[k]+=j;
			k=k+(k&(-k));												//find parent
		}
	}	
}
ll sum(ll k)
{
	ll sum=0;
	while(k>0){
		sum+=tree[k];
		k=k-(k&(-k));
	}
	return sum;
		
}
void update(ll k, ll j)
{
	
	while(k<=n){
			tree[k]+=j;
			k=k+(k&(-k));
	}
}
int main()
{

	cin>>n>>t;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	init_tree();														// Initialise The tree
   
	while(t--){
		char ch;
		ll i,j;
		cin>>ch>>i>>j;
		if(ch=='S'){
			cout<<(sum(j+1)-sum(i))<<endl;
		}
		else if(ch=='G'){
			update(i+1,j);
		}
		else{
			update(i+1,0-j);
		}
	}	
}
