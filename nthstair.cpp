#include <bits/stdc++.h>

using namespace std;
long long fibarr[1000];
int fibo(int n)
{
	int i;
	fibarr[0]=0;
	fibarr[1]=1;
	cout<<"01";
	for(i=2;i<=n;i++){
		fibarr[i]=fibarr[i-1] + fibarr[i-2];
		cout<<fibarr[i];
	}
		return fibarr[n];
}

int main()
{
	int n;
	cin>>n;
	cout<<endl<<fibo(n+1);
	return 0;
}
