//JAN 2015 LONG 

//overlapping sequences
//sorting intervals


#include <bits/stdc++.h>
using namespace std ;
#define ll long long int

struct slots{
	ll a,b;
	};
struct slots data[100005];

bool data_asc(const struct slots &x , const struct slots &y)
{
	return x.a < y.a;
}
int main()
{
	ll t;
	scanf("%lld",&t);
	while(t--)
	{
		ll n;
		cin>>n;
		for(ll i=0;i<n;i++)
		{
			scanf("%lld",&data[i].a);
			scanf("%lld",&data[i].b);
		}
		sort(data, data+n, data_asc);
		/*
		for(ll i=0; i<n; i++)
		{
			for(ll j=0; j<n-i-1; j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j+1];
					a[j+1]=a[j];
					a[j]=temp;
					temp=b[j+1];
					b[j+1]=b[j];
					b[j]=temp;
				}
			}
		}*/
		/*for(ll i=0;i<n;i++)
		{
			printf("%lld ",data[i].a);
			printf("%lld\n",data[i].b);
			
		}*/
		ll arr[100005],brr[100005];
		for(ll i=0;i<n;i++)
		{
			arr[i]=data[i].a;
			brr[i]=data[i].b;
		}
		
		
	ll count=0;
		ll low=arr[0];
		ll high=brr[0];
		count++;
		for(ll i=1;i<n;i++)
		{
			if(arr[i]>high)
			{
				count++;
				low=arr[i];
				high=brr[i];
			}
			else
			{
					low=arr[i];
				if(high>brr[i])
					high=brr[i];
			}
		}
		cout<<count<<endl;
	}
}	
