/* Simple 
 * Reference : https://www.hackerrank.com/challenges/sherlock-and-array	
 * Date : DEC152014
 * Kumar Gaurav
 */


#include <bits/stdc++.h>
#define lli long long
#define MOD 1000000007
using namespace std;

int main()
{
	lli t,n;
	cin>>t;
	while(t--)
	{
		lli sum=0,a[100009];
		cin>>n;
		for(lli i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		lli suml,sumr,flag=0;
		//cout<<"Sum\t"<<sum<<endl;
		for(lli i=0; i<n;i++)
		{
			if(i==0){
				sumr=sum-a[0];
				suml=0;
			}
			else{
				sumr-=a[i];
				//cout<<"sumr\t"<<sumr<<endl;
				suml+=a[i-1];
			}	
			//cout<<"suml\t"<<suml<<endl;
			if(suml==sumr){
				flag=1;
				cout<<"YES\n";
				break;
			}
			
				
			
		}
		if(flag==0)
			cout<<"NO\n";
		
	}
}
