//7. Insert the element at beginning and end of the list | C++ STL
#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> l1={10,20,30,40};
	l1.push_front(12);
	l1.push_back(45);
	for(int i:l1)
	{
		cout<<i<<" ";
	}
	return 0;
}
