//5. Input and add elements to a list C++ STL
#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
	int limit,inp;
	cout<<"Enter number of element: ";
	cin>>limit;
	list<int> l1(limit);
	cout<<"Enter "<< limit <<" elements : ";
	list<int>::iterator i;
  	i = l1.begin();
	for(int i1=0;i1<limit;i1++)
	{
		cin>>*i;
		i++;
	}
    for(auto i:l1)
    {
    	cout<<i<<" ";
	}
	return 0;
}
