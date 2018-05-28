//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <conio.h>
using namespace std;
class Test
{
private: 
	int id;
	string name;
public:
	Test(): id(0), name(""){
	}
	Test(int id, string name):id(id), name(name){
		
	}
	void print(){
		cout<<id<<": "<<name<< endl;
	}
	const Test &operator=(const Test &other){
		cout<<"Assignment running "<<endl;
		id = other.id;
		name = other.name;

		return *this;
	}
	Test (const Test &other){
		cout<<"copy ctr is running "<<endl;
		// id = other.id;
		// name = other.name; -> alternative way to do this is metioned below.
		*this=other;
	}
};
int main(){
//Your code comes here
	Test test1(10, "Raj");
	cout<<"print test 1"<<endl;
	test1.print();

	Test test2(20, "bill");
	cout<<"print test 2"<<endl;
	//test2=test1;-> basics of opertaor overloading... the = sign.
	test2.print();
	Test test3;
	// test3=test2=test1;
	// test3.print();

	test3.operator=(test2);
	cout<<"print test 3"<<endl;
	test3.print();
	//copy initialization
	Test test4 = test1;
	test4.print();
	getch();
	return 0;
}