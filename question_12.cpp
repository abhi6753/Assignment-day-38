//12. Assign a list with array elements C++ STL
#include<iostream>
#include<list>
using namespace std;
int main()
{
	int arr[]={5,15,20};
	list <int > l1={10,20,30,40,50};
    l1.insert(next(l1.begin(),2),arr,arr+3);
	for(int i:l1)
	{
		cout<<i<<" ";
	}
	return 0;
}
