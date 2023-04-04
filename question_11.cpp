//11. Creating a list by assigning the all elements of another list C++ STL
#include<iostream>
#include<list>
using namespace std;
int main()
{
	list <int > l1={10,20,30,40,50};
	list<int>l2;
	l2 = l1;
	for(int i:l2)
	{
		cout<<i<<" ";
	}
	return 0;
}
