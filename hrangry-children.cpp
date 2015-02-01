#include <bits/stdc++.h>
using namespace std ;
#define lli long long unsigned int




int main()
{
	lli arr[100009],n,i=0,k,z,min=1000000001;
    cin>>n>>k;
    for(lli j=0;j<n;j++)
		cin>>arr[j];
	sort(arr,arr+n);
    while(k+i<=n)
    {
		z=arr[k+i-1]-arr[i];
		if(z<min)
			min=z;
		i++;	
	}
    cout<<min;
}    
