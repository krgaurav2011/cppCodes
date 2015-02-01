#include <bits/stdc++.h>
using namespace std ;

int main()
{
	int t;
	cin>>t;
	char a[10005];
	while(t--)
	{
		int count=0;
		gets(a);
		//cin>>a;
		int l = strlen(a);
		//cout<<"length is : \n"<<l;
		if(l%2 != 0)
		{
			cout<<"-1\n";
			
		}
		else
		{
			int i,j;
			
			for(i=0;i<l/2;i++)
			{
				for(j=l/2;j<l;j++)
				{
					if(a[i]==a[j])
					{
						a[j]-=32;
						count++;
						break;
					}
			//		cout<<a<<endl;
				}
			}
			//if(t!=1)
		cout<<l/2-count<<endl;
		}
		
	}
	return 0;
}
