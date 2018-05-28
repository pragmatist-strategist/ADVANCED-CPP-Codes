//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <conio.h>
#include <stack>
using namespace std;
class Test
{
private:
	string name;
public:
	Test(string name):
	name(name){

	};
	~Test(){
		cout<<"destructor called"<<endl;

	}	
	void print(){
		cout<<name<<endl;
	}
	
};
int main(){
	//LIFO-> LAST IN FIRST OUT//
	stack<Test> testStack;
testStack.push(Test("Pranav"));
testStack.push(Test("dhruv"));
testStack.push(Test("aman"));

//this is invalid code! obkject is destroyed...
// Test &test1=testStack.top();
// test1.print();
// testStack.pop();
//Reference refers to destroyed object.
Test test2=testStack.top();
test2.print();

while(testStack.size()>0){
	Test &test =testStack.top();
	test.print();
	testStack.pop();
}

//Your code comes here.
	getch();
	return 0;
}