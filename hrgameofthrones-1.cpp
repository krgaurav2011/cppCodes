#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define lli long long int

lli count(char c ,string s)
{
	lli num=0;
	lli len = s.size();
	for(lli i=0;i<len;i++)
	{
		if(s[i]==c)
			num++;
	}
	return num;
}

int main() {
   
    string s;
    
    lli number,temp=0;
    cin>>s;
    int flag = 0;
	int i,len;
	len = s.size();
	for(i=97;i<26+97;i++)
	{
		char c =i;
		number=count(c,s);
		if(number%2!=0){	
			temp++;
		}
	}
	if(((len%2!=0) && (temp==1)) || ((len%2==0) && (temp==0)))
		flag=1;
	
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}


