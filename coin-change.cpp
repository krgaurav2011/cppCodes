/* Coin Change problem 
 * DP 
 * Reference : https://www.hackerrank.com/challenges/coin-change
 * 			   http://www.geeksforgeeks.org/dynamic-programming-set-7-coin-change/
 * Date : DEC162014
 * Kumar Gaurav
 */


#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000000
using namespace std ;
int count(int s[],int m,int n)
{
	int table[n+1][m];
	int i,j;
	for(j=0;j<m;j++)
		table[0][j]=1;
	for(i=1;i<n+1;i++){
			for(j=0;j<m;j++){
				int x=(i-s[j]>=0)?table[i-s[j]][j]:0;
				int y=(j>=1)?table[i][j-1]:0;
				table[i][j]=x+y;					
			}
	}
	return table[n][m-1]	;	
}
int main()
{
	int s[500];
	string input_str;
	vector<int> vect;

	getline(cin, input_str );

    stringstream ss(input_str);

  int i,m=0,n;

  while (ss >> i)
  {
    vect.push_back(i);

    if (ss.peek() == ',' || ss.peek() == ' ')
    ss.ignore();
  }
	m=vect.size();
	for(int i=0;i<m;i++)
	{
		s[i]=vect[i];
		}
		cin>>n;
	cout<<count(s,m,n);	
}
