//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <map>
#include <conio.h>
using namespace std;
int main(){
	multimap<int, string> lookup;
	lookup.insert(make_pair(30,"Mike"));
	lookup.insert(make_pair(20,"Raj"));
	lookup.insert(make_pair(10,"Bob"));
	for (multimap<int, string>::iterator i = lookup.begin(); i != lookup.end(); i++)
	{
		cout<<i->first<<" :"<<i->second<<endl; 
		
	}
	cout<<endl;
	for (multimap<int, string>::iterator i = lookup.find(20); i != lookup.end(); i++)
	{
		cout<<i->first<<" :"<<i->second<<endl; 

	}
	cout<<endl;
	auto its2=lookup.equal_range(30);
	//pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its=lookup.equal_range(20);
	for (multimap<int, string>::iterator i= its2.first; i != its2.second; i++)
	{
		cout<<i->first<<" :"<<i->second<<endl; 

	}


//Your code comes here.
	getch();
	return 0;
}