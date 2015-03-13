/*FEB LONG CONTEST
 * Kumar Gaurav Feb7,2015
 * www.codechef.com/FEB/15/problems/STFM
 */
 #include <bits/stdc++.h>

using namespace std;
#define ll long long int
vector<ll> fac(10000005,0);
vector<ll> fp(10000005,0);
ll m; 
ll factorial(ll n)
{
	//if(n>m)
		//return 0;
	if(n<=1)
		return 1;
	if(fac[n])
		return fac[n];
	fac[n]=(n*factorial(n-1))%m;
	return fac[n];	
	
}
ll calc(ll x)
{
	//ll temp=0;
	if(x==1)
	{
		return 1;
	}
	if(fp[x])
	{
		
		
		//temp2+=(((x*x*x)+(x*x))/2)%m;
		return fp[x]%m;
	}
	fp[x]=x*(factorial(x)%m)+calc(x-1);
	return fp[x]%m;
}
int main()
{
	
	ll n,a;
	scanf("%lld %lld",&n,&m);
	ll sum=0;
/*for(ll i=1;i<=n;i++)
	{
		cin>>a;
		//cout<<calc(a)<<endl;
		sum+=calc(a)+ ((i*i*(i+1))/2);
		//cout<<"Ith"<<sum<<endl;
		
	}
	*/
	cout<<calc(3)<<endl<<calc(4)<<calc(5);
	//cout<<sum%m;
	
	//cin>>n>>m;
	//cout<<factorial(n);
	
	//temp+=(((x*x*x)+(x*x))/2)%m;
	//fp[x] =temp%m;
	
	for(ll i=1;i<=5;i++)
	{
		cout<<endl<<fac[i]<<" ";
	}
	
	
}
