#include <bits/stdc++.h>
using namespace std ;
#define ll long long int
ll hashmap[1001],*a;

void findkth(ll x,ll y,ll k)
{
	memset(hashmap,0,sizeof(hashmap));
	for(ll i=x;i<=y;i++){
		hashmap[a[i]]++;
	}
	ll rank=1;
	while(k>0){
		k-=hashmap[rank];
		rank++;
	}
	cout<<rank-1<<endl;
}

int main()
{
	ll t,n,q,b,x,y,k;
	cin>>t;
	while(t--){
		cin>>n;
		a = new ll[n+1];
		for(ll i=1;i<=n;i++){
			cin>>a[i];
		}
		cin>>q;
		while(q--){
			cin>>b;
			if(b==0){
				cin>>x>>y>>k;
				findkth(x,y,k);
			}
			else{
				cin>>x>>k;
				a[x]=k;
			}
		}
		
	}	
}
