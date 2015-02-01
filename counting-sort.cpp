/* Counting Sort  
 * Sorting in O(n)
 * Reference : Introduction to Algorithm , CLRS Book (Page 168 )
 * Date : DEC232014
 * Kumar Gaurav
 */


#include <bits/stdc++.h>
using namespace std ;

int main()
{
	int n,k=-1;
	int *b,*c,*a;
	cin>>n;
	b=new int[n];
	a=new int[n];
    for(int j=0;j<n;j++)
	{
		cin>>a[j];
		if(a[j]>k)
			k=a[j];
	}
	k++;
	c=new int[k];														// k is the (maximum value of the array a +1)
	
	for(int i=0;i<k;i++)												// initialise array c with 0
	{
		c[i]=0;
	}
	
	for(int i=0;i<n;i++)												// count the number of each element of array a
	{																	// count of element with value i in c[i];
		c[a[i]]++;
	}
	
	
	for(int i=1;i<k;i++)												// cumulative sum 
	{																	// c[i] contains number of element > = i
		c[i]+=c[i-1];
	}

	for(int i=n-1;i>=0;i--)												//set the result array b
	{																	// each element of a will be in the position according to it is greater than how many elements.	
		b[c[a[i]]-1]=a[i];
		c[a[i]]--;
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<< " ";
	}
	
	
	
	
			
		
}
