#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char st[50];
	int x,y=0;
    cin >> x;
    while(y<x)
    {
		cin >> st;
		int ok =0;
		int i;
		if(st == strrev(st))
		{
			for(i=0;i<strlen(st);i++)
			{
				if(st[i] == '1' || st[i] == '0' || st[i] == '8')
				{
					ok =1;
				}
				else
				{
					ok = 0;
				}
			}
		}
		y++;
		if(ok==1)
			cout << "YES";
		else
			cout << "NO" ;
		
	}			
    return 0;
}
