#include<bits/stdc++.h>
#define ll long long int

using namespace std;
ll k=0;
ll res[100005];
int check(char x)
{
	if(x>='a' && x<='c')
		return 2;
	if(x>='d' && x<='f')
		return 3;
	if(x>='g' && x<='i')
		return 4;
	if(x>='j' && x<='l')
		return 5;
	if(x>='m' && x<='o')
		return 6;
	if(x>='p' && x<='s')
		return 7;
	if(x>='t' && x<='v')
		return 8;
	if(x>='w' && x<='z')
		return 9;							
		
}
void setnum(char *z)
{
	ll sum=0;
	for(int i=0;i<strlen(z);i++)
	{
		sum+=check(z[i])*pow(10,strlen(z)-i-1);
	}
	res[k++]=sum;
}

int main()
{
    ll n;
    cin>>n;
    char a[n+1][9];
    for(ll i=0;i<n;i++)
    {
		cin>>a[i];
		setnum(a[i]);
	}
	sort(res,res+n);
	//ll min=1,count=0,out=0;
	ll i=0,max=0,out=0,temp=0;
	while(i<n-1)
	{
		temp=0;
		while(res[i]==res[i+1])
		{
			temp++;
			i++;
		}
		if(temp>max)
		{
			
			max=temp;
			out=i;
			//cout<<"out"<<out<<endl;
		}
		i++;
	}
	/*for(ll i=0;i<n;i++)
    {
		cout<<res[i]<<endl;
	}*/
	cout<<res[out];
	
}
