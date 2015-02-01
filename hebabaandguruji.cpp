#include <bits/stdc++.h>
using namespace std;
#define lli unsigned long long 
#define MOD 1000000007
lli a[1000000] ={0};
lli x, y;
void findupto(lli n)
{
	if(n==0)
		a[n]=1;
	for(lli i=1;i<=n;i++)
	{
		a[i]=(a[i-1]*x -y)%MOD;
	}
	return;
	
}

int main()
{
	lli t,n,z=0,f;
	cin>>x>>y;
	cin>>t;
	lli inp[t],temp[t];
	a[0]=1;
	f=t;
	while(f--)
	{
		cin>>n;
		inp[z]=n;
		temp[z]=n;
		z++;
	}
	lli flag=0;
	for(lli i=0;i<t;i++)
	{
		if(inp[i]>flag)
			flag=inp[i];
	}
	//sort(temp,temp+t);
	//flag= temp[t-1];
	//cout<<"flag = "<<flag<<endl;
	findupto(flag);
		//cout<<a[n]<<endl;
	for(lli k=0;k<t;k++)
	{
		//cout<<inp[k]<<" ";
		cout<<a[inp[k]]<<endl;
	}
}
