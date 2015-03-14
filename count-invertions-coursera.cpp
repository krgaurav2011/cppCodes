//Assigmnment 1
//Algorithms: Design and Analysis, Part 1
//Kumar Gaurav		Jan28,2015

#include <bits/stdc++.h>
using namespace std ;
#define ll long long int

ll temp[100005];
ll merge(ll a[],ll low,ll mid,ll high)
{
	ll count=0;
	ll i=low;
	ll j=mid;
	ll k=low;
	while(i<=mid-1 && j<=high)
	{
		if(a[i]<=a[j])
		{
			temp[k++]=a[i++];
		}
		else
		{
			temp[k++]=a[j++];
			count+=(mid-i);
		}
	}
	while(i<=mid-1)
	{
		temp[k++]=a[i++];
	}
	while(j<=high)
	{
		temp[k++]=a[j++];
	}
	for(ll z=low;z<=high;z++)
	{
		a[z]=temp[z];
	}
	return count;
	
}

ll find_invertions(ll a[],ll low,ll high)
{
	ll mid,count=0;
	if(high>low)
	{
	mid=(low+high)/2;
	count=find_invertions(a,low,mid);
	count+=find_invertions(a,mid+1,high);
	count+=merge(a,low,mid+1,high);
	}
	return count;
}


int main()
{
	ll a[100005];//={ 4, 80, 70, 23, 9, 60, 68, 27, 66, 78, 12, 40, 52, 53, 44, 8, 49, 28, 18, 46, 21, 39, 51, 7, 87, 99, 69, 62, 84, 6, 79, 67, 14, 98, 83, 0, 96, 5, 82, 10, 26, 48, 3, 2, 15, 92, 11, 55, 63, 97, 43, 45, 81, 42, 95, 20, 25, 74, 24, 72, 91, 35, 86, 19, 75, 58, 71, 47, 76, 59, 64, 93, 17, 50, 56, 94, 90, 89, 32, 37, 34, 65, 1, 73, 41, 36, 57, 77, 30, 22, 13, 29, 38, 16, 88, 61, 31, 85, 33, 54 };
	
	//FILE *ptr_file;
	ll n;//= 100000;
	cin>>n;
	/*ptr_file =fopen("cppstl.cpp", "r");
	if (!ptr_file)
		return 1;
		*/
	for (ll x=0; x<n; x++)
		//fscanf(ptr_file,"%lld\n", &a[x]);
		cin>>a[x];
	//fclose(ptr_file);
	cout<<find_invertions(a,0,n-1);
}
