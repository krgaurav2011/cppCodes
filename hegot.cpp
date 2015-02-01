#include <bits/stdc++.h>
using namespace std;
#define lli long long int

void output(lli k)
{
	if(k%3==0)
		cout<<"SL"<<endl;
	else if(k%3==1)
		cout<<"LB"<<endl;
	else if(k%3==2)
		cout<<"BS"<<endl;
	//return 0;			
}
int main()
{
	lli t,n,num;
	cin>>t;
	while(t--)
	{
		n=1;
		cin>>num;
		
		while(1)
		{
			if(num==1){
				output(num);
				break;
			}
			else if ((n*(n+1))/2 < num && ((n+1)*(n+2))/2 >=num){	
				output(n+1);
				break;
			}
			n++;
		}	
		
	}
	return 0;
}
