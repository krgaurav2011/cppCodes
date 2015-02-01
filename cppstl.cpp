
#include<iostream>
#include<vector>
#include<cctype>
#include<stdlib.h>

using namespace std;

int main()
{
	vector<int> v(10,-1);
	vector<int> v2(5,-2);
	//cout<<v.size();
	v.push_back(10);
	//cout<<v[1];;
	/*vector<int>::iterator i = v.begin();
	while(i!=v.end())
	{
		cout<<*i<<endl;
		i++;
	}
	*/
	 for(vector<int>::iterator i =v.begin();i!=v.end();i++)
	 {
		 *i+=100+ rand()%30;
		 cout<<*i<<endl;
		}
		cout<<endl;
	cout<<v.size()<<endl;
	vector<int>::iterator i=v.begin();	
	
	v.erase(i,i+5);
	//vector<int>::iterator p=v.begin();	
	//v.insert(p,v2.begin(),v2.end()-3);

	cout<<v.size()<<endl<<endl;
	for(vector<int>::iterator i =v.begin();i!=v.end();i++)
	{
		// *i+=100;
		 cout<<*i<<endl;
		// v.erase(i);
	}
		i=v.end();
	cout<<"Popped"<<*(i-1)<<endl;
	v.pop_back() ;
	
	for(vector<int>::iterator i =v.begin();i!=v.end();i++)
	{
		// *i+=100;
		 cout<<*i<<endl;
		// v.erase(i);
	}	
	
}
