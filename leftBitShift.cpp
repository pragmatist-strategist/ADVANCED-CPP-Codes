//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <conio.h>
using namespace std;
class Test
{
private:
	int id ;
	string name;
public:
	Test() :
	id(0), name(" "){

	}
	Test(int id, string name): id(id), name(name){

	}
	void print(){
		cout<<id<<" :" << name<<endl;
	}
	const Test &operator=(const Test &other){
		id=other.id;
		name=other.name;
		return *this;
	}
	Test(const Test &other){
		*this=other;
	}
	 friend ostream &operator<<(ostream &out, const Test &test){
out<<test.id<< ": "<<test.name<<" ->Running using friend ostream";
return out;
	}
};
int main(){
//Your code comes here.
Test test1(10, "Raj");
test1.print();
cout<< test1 <<" ->bit shift operator overloading."<<endl;//-> not working
cout<<test1<<endl;
int val=1+3+6;

getch();
return 0;
}