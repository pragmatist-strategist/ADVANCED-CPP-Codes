//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <conio.h>
using namespace std;
template<class T, class K>
class test
{
private:
	T obj;
public:
	test(T obj){
		this->obj=obj;
	}
	void print(){
		cout<<obj<<endl;
	}
	
};
int main(){
test<string, int> test1("Hello");
test1.print();
//Your code comes here.
getch();
return 0;
}