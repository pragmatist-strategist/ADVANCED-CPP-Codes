//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <map>
#include <conio.h>
using namespace std;
class person
{
private:
	string name;
	int age;
public:
	person(): name(""), age(){

	}
	person(const person &other){
		cout<<"copy constructor running! "<<endl;
		name=other.name;
		age=other.age;
	}
	person(string name, int age):
	name(name), age(age){

	}
	void print()  {
		cout<< name <<": "<< age <<endl;
	}
	
};
int main(){
 map<int, person> people;
people[0]=person("mike", 40);
people[2]=person("raj", 20);
people[1]=person("vicky", 30);

people.insert(make_pair(55, person("Bob", 45)));
people.insert(make_pair(55, person("Sue", 24)));

for (std::map<int, person>::iterator i = people.begin(); i != people.end(); i++)
{
	cout<< i->first <<": " ;
	i->second.print();
	
}

getch();
return 0;
}