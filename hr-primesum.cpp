//sum of prime numbers upto n

//TLE


#include <bits/stdc++.h>
using namespace std ;
#define ll long long unsigned int

int main(){

    ll num,i,count,a[78500];
   // printf("Enter max range: ");
    //scanf("%d",&n);
a[0]=0;
	ll k=1;
		for(num = 1;num<=78498;num++){

         count = 0;

			for(i=2;i<=num/2;i++){
				if(num%i==0){
                 count++;
                 break;
				}
			}
        
         if(count==0 && num!= 1)
          {   a[k]=num+a[k-1];
             k++;
			}
		}
	ll t,x;
	cin>>t;
	while(t--)
	{
		cin>>x;
		cout<<a[x]<<endl;
	}

}	
