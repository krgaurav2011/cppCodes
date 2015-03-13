//Assigmnment 2 quick-sort using 1st element as pivot
//Algorithms: Design and Analysis, Part 1
//Kumar Gaurav		Jan28,2015

#include <bits/stdc++.h>

using namespace std;
#define ll long long int

ll num=0,a[10005];
ll partition(ll l,ll r)
{
	ll pivot= a[l];
	ll i=l+1;
	for(ll j=l+1;j<=r;j++)
	{
		if(a[j]<pivot)
		{
			swap(a[j],a[i]);
			i++;
		}
	}
	swap(a[l],a[i-1]);
	num+=r-l;
	return i-1;
}

void quick_sortandcount(ll l,ll r)
{
	if(l<r)
	{
	ll p = partition(l,r);
	quick_sortandcount(l,p-1);
	quick_sortandcount(p+1,r);
}
	
}


int main()
{
	
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


