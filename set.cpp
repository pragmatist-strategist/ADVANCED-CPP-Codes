//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include<set>
#include <conio.h>
using namespace std;
class test
{
	int id;
	string name;
public:
	test(): id(0), name("") {

	} 
test(int id,string name):id(id), name(name){
}

void print() const{
	cout<<id<<": "<<name<<endl;
}	
bool operator<(const test other)const{
	return name < other.name; 
}
};

int main(){
	set<int> numbers;
	numbers.insert(20);

	numbers.insert(30);

	numbers.insert(40);

	numbers.insert(50);
	for (std::set<int>::iterator i = numbers.begin(); i != numbers.end(); i++)
	{
		cout<<*i<<endl;
	}
	set<int>::iterator itFind=numbers.find(10);
	if (itFind!=numbers.end())
	{
		/* code */
		cout<<"Found: "<<*itFind<<endl;
	}
	if (numbers.count(30))
	{
		/* code */
		cout<<"number found."<<endl;
	}

	set<test> tests;
	tests.insert(test(10, "Mike"));
	tests.insert(test(30, "sue"));
	tests.insert(test(40, "john"));
	//tests.insert(test(30, "sue"));-> no new sue is inserted in this.
	tests.insert(test(70, "joe"));
//Your code comes here.
	for (std::set<test>::iterator i = tests.begin(); i != tests.end(); i++)
	{
		i->print();
	}
getch();
return 0;
}