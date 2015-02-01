#include <bits/stdc++.h>

using namespace std;

long long A[100005];

int main()
{
    int n;
    cin >> n;
    for ( int i = 0; i < n; i++ ) cin >> A[i];
    if ( n == 1 ) {
        cout << 0 << endl;
        return 0;
    }
    sort(A,A+n);
    long long mx = A[n-1]-A[0]; 
    long long mn;
    for ( int i = 0; i < n-1; i++ ) {
        if ( i == 0 ) mn = A[i+1]-A[i];
        else mn = min(mn, A[i+1]-A[i]);
    }
    long long ans1,ans2;
    ans1 = ans2 = 0;
    for ( int i = 0; i < n-1; i++ ) {
        int idx1 = upper_bound(A+i+1, A+n, A[i]+mx) - lower_bound(A+i+1, A+n, A[i]+mx);
        int idx2 = upper_bound(A+i+1, A+n, A[i]+mn) - lower_bound(A+i+1, A+n, A[i]+mn);
        ans1 += idx1;
        ans2 += idx2;
        
    }
    cout << ans2 << " " << ans1 << endl;
    return 0;
}
