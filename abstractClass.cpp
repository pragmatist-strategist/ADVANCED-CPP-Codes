//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
// this code is somehow not working correctly.. Maybe some compiler issues are there...

#include <iostream>
#include <conio.h>
using namespace std;
class Animal
{
public:
	virtual void run()=0;
virtual void speak();	
};
class Dog: public Animal
{
public:
	virtual void speak(){
		cout<<" Woof! "<<endl;
	}
};
class Labra: public Dog
{
public:
	Labra(){
		cout<<"New labrador"<<endl;
	}
	virtual void run(){
		cout<<"Labra running"<< endl;
	}
	
	
};
void test(Animal &a){
	a.run();
}
int main(){
	// Animal animal;
//Labra labs[5];-----> this command is not working. dont know why????
	// Dog dog;
	// dog.speak();
	Labra lab;
	lab.run();
	lab.speak();
	Animal *animals[5];
	animals[0]=&lab;
	animals[0]->speak();
	test(lab);
//Your code comes here.
getch();
return 0;
}