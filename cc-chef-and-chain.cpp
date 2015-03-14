/*FEB LONG CONTEST
 * Kumar Gaurav Feb7,2015
 * www.codechef.com/FEB/15/problems/CHEFCH 
 */
 
#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a[10005];
		cin>>a;
		int count=0;
		//cout<<strlen(a)<<"\t";
		for(int i=1;i<(int)strlen(a);i++){
			if(i%2==1 && a[i]==a[0]){
				count++;
			}
			else if(i%2==0 && a[i]!=a[0]){
				count++;
			}
		}
		cout<<min(count,(int)strlen(a)-count)<<endl;
	}
		
}
	


