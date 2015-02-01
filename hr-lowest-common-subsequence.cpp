#include <bits/stdc++.h>

using namespace std;

int smax(int a,int b){
	return (a>b)?a:b;
}

void lcs(int X[], int Y[],int m,int n)
{
	long long L[m+1][n+1];
	int ans[100];
	int z=0;
	//cout<<m<<endl<<n<<endl;
	for(int i=0;i<=m;i++)
	{
		//cout<<"jj";
		for(int j=0;j<=n;j++)
		{
			//cout<<"zz\n";
			if(i==0 || j==0)
			{
				L[i][j]=0;
				//cout<<"kk\n";
				}
				
			else if(X[i-1] == Y[j-1])
			{	
				L[i][j]=1+L[i-1][j-1];
				//ans[z++]=X[i-1];
				//cout<<ans<<"\t";
			}
			else{
				L[i][j]=smax(L[i-1][j],L[i][j-1]);
				//cout<<"zz\n";}
		}
	}
	
}
//for(int p=0;p<L[m][n];p++)
	//	cout<<ans[p]<<" ";
	//cout<< L[m][n];
	//print(L,
	int i = m, j = n;
   while (i > 0 && j > 0)
   {
      // If current character in X[] and Y are same, then
      // current character is part of LCS
      if (X[i-1] == Y[j-1])
      {
          ans[z++] = X[i-1]; // Put current character in result
          i--; j--;     // reduce values of i, j and index
      }
 
      // If not same, then find the larger of two and
      // go in the direction of larger value
      else if (L[i-1][j] > L[i][j-1])
         i--;
      else
         j--;
   }
   for(int p=L[m][n]-1;p>=0;p--)
		cout<<ans[p]<<" ";
   
   
}

int main()
{
	int x[105];//={1,2,3,4,1};
	int y[105];//={3,4,1,2,1,3};
   int n,m;
	cin>>n;
    cin>>m;
    for(int i=0;i<n;i++)
       cin>>x[i];
    for(int j=0;j<m;j++)
       cin>>y[j];
       
	//int n=5;
	//scanf("%",x);
	//scanf("%s",y);
	//int m= strlen(x);
	//int n = strlen(y);
	lcs(x,y,n,m);
	return 0;
	
}
