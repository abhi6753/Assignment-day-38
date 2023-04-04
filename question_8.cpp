//8. Remove all occurrences of an element and remove set of some specific from the list C++ STL
#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
	list<int> l1 ={10,20,30,9,9,405,9,2,9};
	list<int>::iterator i;
	int flag=1;
	l1.remove_if([](int n){ return n > 10; }); //removes elements satisfying specific criteria
	for(i = l1.begin();i!=l1.end();i++)
	{
		cout<<*i<<" ";
	}
	return 0;
}
