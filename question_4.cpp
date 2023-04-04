//4. Iterate a list in reverse order C++ STL
#include<iostream>
#include<iterator>
#include<string>
#include<list>
using namespace std;
int main()
{
	list<string> l1={"Abhi","Neha","Monu","Sonu","Vivek"};
	list<int> l2 ={10,2,30,40,3};
	//list<int>::iterator i;
	for( auto i = l1.rbegin();i!=l1.rend();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	for( auto i = l2.rbegin();i!=l2.rend();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	return 0;
}

