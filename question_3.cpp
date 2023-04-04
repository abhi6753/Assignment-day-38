//3. Iterate a list C++ STL
#include<iostream>
#include<iterator>
#include<list>
using namespace std;
int main()
{
	list<string> l1{"Abhi","Neha","Monu","Sonu","Vivek"};
	list<string>::iterator i;
	i = l1.begin();
	for(i;i!=l1.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	return 0;
}

