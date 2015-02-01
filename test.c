#include <stdio.h>
#include <stdlib.h>

int arr[10004],tarr[10004];


int partition(int lb,int ub)
{
	int p,q,key,t;
	p=lb+1;
	q=ub;
	key=tarr[lb];
	while(p>=q)
	{
		while(tarr[p]<key)
		p=p+1;
		while(tarr[q]>key)
		q=q-1;

		if(q>p)
		{
			t=tarr[p];
			tarr[p]=tarr[q];
			tarr[q]=t;
		}
	}

	t=tarr[lb];
	tarr[lb]=tarr[q];
	tarr[q]=t;

	return q;
}


int smallest(int low,int high,int k)
{
	int j,kk;
	while(1)
	{
		printf("hello");

		j=partition(low,high);
		kk=j-low+1;
		if(kk==k)
		return (tarr[k]);
		else
		if(k<kk)
		high=j-1;
		else
		{
			low=j+1;
			k=k-kk;
		}
		printf("%d",tarr[kk]);
	}
	return 0;
}


void query1(int x,int k)
{
    arr[x]=k;
    printf("heltytyyyyyyyyyyylo");
    
}

void query2(int x,int y,int k)
{
	printf("hello");
	int kk,i,t;
	kk=1;
	printf("hello");
	for(i=x;i<=y;i++)
	{
		//printf("%d ",arr[i]);
		tarr[kk++]=arr[i];
	}
	
	/*t=smallest(x,y,k);
	//pr t;
	* */

}


int main()
{
    int l,x,y,k,i,n,t,check,q,a,b,c;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);

        scanf("%d",&q);
        for(i=1;i<=q;i++)
        {
            scanf("%d",&check);
            printf("%d",check);
            if(check==1)
            {
                scanf("%d",&x);
                scanf("%d",&k);
                query1(x,k);
            }
            else if(check==0)
            {
				//printf("hello");
                printf("hey");
               
                scanf("%d",&a);
                
               scanf("%d",&b);
                scanf("%d",&c);
                printf("hkkkkko");
                query2(a,b,c);
                //printf("%d\n",l);
            }
        }
        t--;
    }
    return 0;
}
