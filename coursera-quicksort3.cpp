//Assigmnment 2 quick-sort using last element as pivot
//Algorithms: Design and Analysis, Part 1
//Kumar Gaurav		Jan28,2015

#include <bits/stdc++.h>

using namespace std;
#define ll long long int

ll num=0,a[10005],n;
ll partition(ll l,ll r)
{ 
	ll mid = (l+r)/2,pivot;
	if(r-l>=2){
	if((a[l]>a[mid]&& a[mid]>a[r]) || (a[l]<a[mid]&& a[mid]<a[r]))
		mid=mid;
	else if((a[l]<a[r]&& a[mid]>a[r]) || (a[l]>a[r]&& a[mid]<a[r]))	
		mid=r;
	else if((a[l]<a[r]&&a[mid]<a[l]) || (a[l]>a[r]&& a[mid]>a[l]))
		mid=l;
	}
	if(r-l <= 1){
		mid =a[l]>a[r]?r:l;
	}	
	swap(a[mid],a[l]);
	pivot= a[l];	
	//cout<<"pIvot: "<<pivot;
	ll i=l+1;
	for(ll j=l+1;j<=r;j++){
		if(a[j]<pivot){
			swap(a[j],a[i]);
			i++;
		}
		++num;
	}
	swap(a[l],a[i-1]);
	return i-1;
}

void quick_sortandcount(ll l,ll r)
{
	if(l<r){
		ll p = partition(l,r);
		/*cout<<"\t";
		for (ll x=l; x<=p-1; x++)
			//fscanf(ptr_file,"%lld\n", &a[x]);
			cout<<a[x]<<" ";
		cout<<"\t and ";
		for (ll x=p+1; x<=r; x++)
			//fscanf(ptr_file,"%lld\n", &a[x]);
			cout<<a[x]<<" ";
		cout<<endl;		
		cout<<endl;	*/
		quick_sortandcount(l,p-1);
		quick_sortandcount(p+1,r);
	}
}


int main()
{
	//ll a;
	FILE *ptr_file;
	ll n = 10000;
	//cin>>n;
	ptr_file =fopen("courseraQuickSort.txt", "r");
	if (!ptr_file)
		return 1;
	for (ll x=1; x<=n; x++)
		fscanf(ptr_file,"%lld\n", &a[x]);
		//cin>>a[x];
	fclose(ptr_file);
	quick_sortandcount(1,n);
	cout<<num<<endl;
	//for (ll x=1; x<=n; x++)
		//fscanf(ptr_file,"%lld\n", &a[x]);
		//cout<<a[x]<<" ";
}


