#include <iostream>
using namespace std;

int main()
{
	int n,j,i,q;
	int(*arr)[2];
	int(*temp)[2];
	cin >> n;
	arr = new int[n][2];
	temp = new int[n][2];
	for(i=0;i<n;i++)
		for(j=0;j<2;j++)
			{
				cin>>arr[i][j] ;
			}
	cin >> q;
	int k=0,m,p,a[100],x,ans[100];
	while(k<q)
	{
		cin>>x;
		for(i=0;i<x;i++)
		{
			cin >> a[i];
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<2;j++)
			{
				temp[i][j]=arr[i][j] ;
			}
		}
		int count =0;
		for(m=0;m<x;m++)
		{
			for(p=0;p<n;p++)
			{
				if(a[m]>=temp[p][0] && a[m]<=temp[p][1] && temp[p][0]!=-1 && temp[p][1]!=-1)
				{
						count++;
						temp[p][0]=-1;
						temp[p][1]=-1;
						//cout<<"count is: " << count;
				}
				//cout<<" count2 is:" << count;
			}
				
		}
		//cout<<" countfinal is:" << count;
		ans[k]=count;
		k++	;
	}
	for(i=0;i<x;i++)
		cout<<ans[i]<<endl;
	delete temp;
	delete arr;	
	return 0;	
}
