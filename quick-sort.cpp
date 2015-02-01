/* Date : DEC232014
 * Kumar Gaurav
 * Quick Sort
 * not complete
 */



#include <bits/stdc++.h>
using namespace std;
void quicksort(int a[],int p,int r)
{
	for(int i=p;i<=r;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<" ds "<<endl;
	if(p<r)
	{
	int b[100005],c[100005];
	int k=0,j=0;
	for(int i=p+1;i<=r;i++)
    {
        if(a[i]<a[p])
            b[k++]=a[i];
        else
            c[j++]=a[i];
    }
    b[k]=a[p];
    for(int i=1;i<=j;i++)
    {
        b[k+i]=c[i-1];
    }
    
   quicksort(b,p,k-1);
   quicksort(b,k+1,k+j);
   for(int i=0;i<k;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<j;i++)
    {
        cout<<c[i]<<" ";
    }
    
    cout<<endl;
  } 
}
int main()
{
    int a[10000],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    quicksort(a,0,n-1);
    
}
