//this is 017 from c++course . This section is not very clear.
//Need to watch this section of code very carefully....
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
	void print() const{
		cout<< name <<": "<< age <<flush;
	}
	
};
int main(){
	string test1="Mike";
	string test2="Bob";
	bool ans= test2 < test1;

	map<person, int> people;
	people[person("mike", 40)]=40;
	people[person("raj", 30)]=30;
	people[person("vicky", 0)]=20;


// people.insert(make_pair(55, person("Bob", 45)));
// people.insert(make_pair(55, person("Sue", 24)));

	for (std::map<person, int>::iterator i = people.begin(); i != people.end(); i++)
	{
		cout<< i->first.print() <<": "<<flush ;
		cout<<i->second.print()<<" :"<<flush;

	}

	getch();
	return 0;
}