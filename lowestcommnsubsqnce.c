/*Lowest Common Subsequence 
 *Reference : www.geeksforgeeks.org/dynamic-programming-set-4-longest-common-subsequence/index.html
* Kumar Gaurav, NITDGP
* Date : DEC10,2014
* DP O(mn)
*/


#include <stdio.h>

int max(int a,int b){
	return (a>b)?a:b;
}
/*int lcs(char* x,char* y, int m ,int n)
{
	if(m==0 || n==0)
		return 0;
	if(x[m-1]==y[n-1])
			return 1+lcs(x,y,m-1,n-1);
	else
			return max(lcs(x,y,m-1,n),lcs(x,y,m,n-1));
}*/
int L[5005][5005];
int lcs(char* x,char* y, int m ,int n){
    int i,j;
    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            if(i==0 || j==0)
		          L[i][j] =0;
	        else if(x[i-1]==y[j-1])
			      L[i][j]= 1+L[i-1][j-1];
	        else
			      L[i][j]=max(L[i-1][j],L[i][j-1]);
        }
    }
    return L[m][n];
}
int main()
{
	char x[5002];
	char y[5002];
	scanf("%s",x);
	scanf("%s",y);
	int m= strlen(x);
	int n = strlen(y);
	printf("%d",lcs(x,y,m,n));
	return 0;
	
}
