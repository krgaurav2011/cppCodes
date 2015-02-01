#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define lli long long int

int main()
{
	int n,a,b,t,arr[10000],i,mi,ma;
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b;
		//cout<<a<<b;
		
		if(a==b){
			cout<< (n-1)*a;
		}
		else{	
			mi=min(a,b);
			ma=max(a,b);
			for(i=0;i<n;i++)
			{
				arr[i] = (ma*i + mi*(n-1-i));
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
	}
}
