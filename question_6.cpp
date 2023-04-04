//6. Get the first and last element of the list C++ STL
#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> l1={10,20,30,40};
	cout<<"first element of the list = "<<l1.front()<<endl;
	cout<<"Last element of the list  = "<<l1.back();
	return 0;
}
