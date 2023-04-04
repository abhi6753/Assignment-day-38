//14. Access elements of a characters list using const_iterator in C++ STL
#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
	list<char> l1={'A','B','H','I','S','H','E','K'};
	list<char> ::const_iterator ci;//It can be used for access only, and can’t be used for modification
	for(ci=l1.begin();ci!=l1.end();i++)
	{
		cout<<*ci<<" ";
	}
	cout<<endl;
	return 0;
}
