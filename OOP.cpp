//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <conio.h>
using namespace std;
class Parent
{
private:
	int one;
public:
	Parent(){

	}	Parent(const Parent &other){
		one=other.one;
		cout<<"Copy Parent "<<endl;
	}
	virtual	void print(){
		cout<<"Parent"<<endl;
	}	
	virtual ~Parent(){

	}
};
class Child: public Parent
{
private:
	int two;
public:
	Child(): two(0){

	}
	void print(){
		cout<< "Child"<<endl;
	}
};
int main(){

	Child c1;
	Parent &p1=c1;
	p1.print();

	Parent p2=Child();
	p2.print();
//Your code comes here.
	getch();
	return 0;
}