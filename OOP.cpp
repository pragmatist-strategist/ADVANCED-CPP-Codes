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

// What is Lorem Ipsum?
// Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.

// Why do we use it?
// It is a long established fact that a reader will be distracted by the readable content of a page when looking at its layout. The point of using Lorem Ipsum is that it has a more-or-less normal distribution of letters, as opposed to using 'Content here, content here', making it look like readable English. Many desktop publishing packages and web page editors now use Lorem Ipsum as their default model text, and a search for 'lorem ipsum' will uncover many web sites still in their infancy. Various versions have evolved over the years, sometimes by accident, sometimes on purpose (injected humour and the like).
