//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <conio.h>
using namespace std;
void test(int value){
	cout<<"Hello" <<value<<endl;
}
int main(){
	test(7);
	void(*ptest)(int);
	ptest = &test;
	//ptest = test;
	ptest(8);
	//(*ptest)();

//Your code comes here.
getch();
return 0;
}