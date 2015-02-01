/* Date : DEC232014
 * Kumar Gaurav
 */



#include <bits/stdc++.h>
using namespace std;

int main()
{
	char a[83];
	int row,col;
	cin>>a;
	int len = strlen(a);
	//cout<<len;
	int x = floor(sqrt(len));
	int y = ceil(sqrt(len));
	while(x*y<len)
	{
		x++;
	}
	if(x>y)
	{
		col=x;
		row=y;
	}
	else
	{
		row=x;
		col=y;
	}
	//cout<<row<<endl<<col;
	char res[row+1][col+1];
	int i=0;
	for(int p=0;p<row;p++)
	{
		for(int q=0;q<col;q++)
		{
			//cout<<" "<<a[i];
			if(i==len)
			{
				res[p][q]='\0';
			}
			else
				res[p][q]=a[i++];
			//cout<<"  "<<res[p][q];	
		}
		//cout<<endl;
	}
	/*for(int p=0;p<row;p++)
	{
		for(int q=0;q<col;q++)
		{
			
			cout<<res[p][q]<<" ";
			
			
		}
		cout<<endl;
	}*/
	
	i=0;
	for(int p=0;p<col;p++)
	{
		for(int q=0;q<row;q++)
		{
			if(res[q][p]!='\0'){
			cout<<res[q][p];
			i++;
			//cout<<i<<endl;
			if(i==len)
				exit(0);
			}
			
		}
		cout<<" ";
	}	
}
