#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	lli n,a[1000],i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(i=0;i<n;i++){
		if(a[i]%2==0)
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for(i=n-1;i>=0;i--){
		if(a[i]%2!=0)
		cout<<a[i]<<" ";
	}
	return 0;
}
