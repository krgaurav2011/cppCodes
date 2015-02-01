//REF: http://www.codechef.com/RCSN2015/problems/RECREP
//binary_search in strings
//Kumar Gaurav 25Jan2014


#include <bits/stdc++.h>
using namespace std ;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		string str[n];
		for(ll i=0;i<n;i++)
		{
			cin>>str[i];
		}
		string s;
		cin>>s;
		
		if(binary_search(str,str+n,s))									//binary_search() <algorithm>  http://www.cplusplus.com/reference/algorithm/binary_search/
			cout<<"yes"<<endl;
		else
			cout<<"no"<endl;
		
		
	}
		
		/*
		ll min = 0;
		ll max = n-1;
		ll mid;
		bool found = false;
		ll i;
		ll length = strlen(check);
   
		while (min <= max && !found)
		{
			mid = (min + max) /2;
			for(i=0;i<length;i++)
			{
				if(str[mid][i] == '\0')
					break;
				if (str[mid][i]== check[i])
					continue;
				else if (str[mid][i] > check[i])
					max = mid -1;
				else
					min = mid + 1;
				break;
        }
        if(i==length)
            found=true;
		}
	if(found==true)
			cout<<"yes"<<endl;
    else
		cout<<"no"<<endl;
	}
	*/
}	
