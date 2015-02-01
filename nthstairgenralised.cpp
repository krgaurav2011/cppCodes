#include <bits/stdc++.h>

using namespace std;

int countways(int n,int m)
{
	
    int res[n];
    res[0] = 1; res[1] = 1;
    for (int i=2; i<n; i++)
    {
       res[i] = 0;
       for (int j=1; j<=m && j<=i; j++)
         res[i] += res[i-j];
    }
    return res[n-1];
}


int main()
{
	int s,m;
	cin>>s>>m;
	cout<<countways(s+1,m);

	
	
}


