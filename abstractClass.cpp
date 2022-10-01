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
//animal
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
//What is Lorem Ipsum?
//Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum
