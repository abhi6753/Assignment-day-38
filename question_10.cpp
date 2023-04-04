//10. Merge two lists C++ STL
#include<iostream>
#include<list>
using namespace std;
int main()
{
	list <int > l1={10,20,30,40,50};
	list<int>l2 {60,70,80,90};
	l1.merge(l2);
	for(int i:l1)
	{
		cout<<i<<" ";
	}
	return 0;
}
