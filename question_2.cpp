//2. Assign the elements to the list (different methods) - Example of list::assign() | C++ STL
#include<iostream>
#include<list>
using namespace std;
int main()
{
  list<int> l1(7);
  l1={1,2,3,4,5};        // 1st method 
  list <int> l2{10,20,30,40}; // 2nd method
  list <char> l3;
  l3.push_back(12);   // 3rd method
  l3.push_front(13); // 4th method
  l3.assign(2,14); //5th method
  l3.insert(l3.begin(),{9,3,4}); //6th method
  for(int x : l3)
  {
   cout<<x<<" ";
  }
  return 0;
}
