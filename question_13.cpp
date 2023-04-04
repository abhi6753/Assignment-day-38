//13. Push characters in a list and print them separated by space in C++ STL
#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<char> l1={'A','B','H','I','S','H','E','K'};
	for(char i: l1)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
