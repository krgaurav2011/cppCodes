#include <bits/stdc++.h>
using namespace std ;
#define ll long long int

void  func(int *z)
{
	*z=100;
	cout<<*z<<endl;
}
int main()
{
	static int a=5;
	cout<<a<<endl;
	func(&a);

	cout<<a;
}
