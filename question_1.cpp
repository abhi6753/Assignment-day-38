//1. List functions in C++ STL (Standard Template Library)
#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
	list<int> l1,l2{5,6,7,8,9} ;
lis<int> l3(7);// 7 is length of list;
    l1.push_back(2);
	int in;
	cout<<"Insert 5 elements in linked list :"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>in;
		l1.push_back(in);
	}
	list<int>:: iterator x;
	 push_front & push_back function
	l1.push_front(12);
	l1.push_back(40);
	l1.reverse();
	l1.sort();
	l1.pop_front();
	l1.pop_back();
	l1.remove(55); 
 	l1.assign(10,12); // it will make copies of 12 ten times;
   x = l1.begin();
	l1.insert(next(x,2),{11,12,13}); // to insert  element in middlle
	l1.swap(l2); // it'll swap the elements of two list
    for(auto x : l1)
    {
    	cout<<x<<" ";
	}
	cout<<endl;
	for(auto x : l2)
    {
    	cout<<x<<" ";
	}
    return 0;
}
