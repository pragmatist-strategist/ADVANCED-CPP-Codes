//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <conio.h>
#include <queue>
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
		//cout<<"destructor called"<<endl;

	}	
	void print(){
		cout<<name<<endl;
	}
	
};
int main(){
	//FIFO-> FIRST IN FIRST OUT//
	queue<Test> testQueue;
testQueue.push(Test("Pranav"));
testQueue.push(Test("dhruv"));
testQueue.push(Test("aman"));

Test test2=testQueue.front();
test2.print();

testQueue.back().print();
cout<<endl;
while(testQueue.size()>0){
	Test &test =testQueue.front();
	test.print();
	testQueue.pop();
}

//Your code comes here.
	getch();
	return 0;
}