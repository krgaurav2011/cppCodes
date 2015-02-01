#include <bits/stdc++.h>

using namespace std;
#define lli  long long 

int main()
{
	int n;
	cin>>n;
	int i=0;
	lli a[1000005],ma,mi;
	while(i<n)
	{
		cin>>a[i];
		i++;
		}
		if ( n == 1 ) {
        cout << 0 << endl;
        return 0;
    }
	sort(a,a+n);
	ma = a[n-1]- a[0];
	//mi = a[1] - a[0];
	lli count=0;
	lli count2=0;
	for ( int i = 0; i < n-1; i++ ) {
        if ( i == 0 ) 
			mi = a[i+1]-a[i];
        else 
			mi = min(mi, a[i+1]-a[i]);
	}
    //ans1 = ans2 = 0;
    for ( int i = 0; i < n-1; i++ ) {
        int idx1 = upper_bound(a+i+1, a+n, a[i]+ma) - lower_bound(a+i+1, a+n, a[i]+ma);
        int idx2 = upper_bound(a+i+1, a+n, a[i]+mi) - lower_bound(a+i+1, a+n, a[i]+mi);
        count += idx1;
        count2 += idx2;
        
    }
	cout<<count2<<" "<<count;		
}
