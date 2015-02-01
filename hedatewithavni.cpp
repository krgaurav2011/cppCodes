#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	int t,i,len;
	cin>>t;
	char s[100];
	while(t--)
	{
		i=0;
		cin>>s;
		len=strlen(s);
		while(i<len)
		{
			if(s[i] == s[i+1])
			{
				cout<<"SLAP"<<endl;
				break;
			}
			i++;
		}
		if(i==len)
			cout<<"KISS"<<endl;
		
	}
	return 0;	
}	
