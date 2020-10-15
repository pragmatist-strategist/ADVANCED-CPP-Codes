//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <conio.h>
using namespace std;
//chchcjvjvb
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
	/*
	Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.
	*/
};
int main(){
test<string, int> test1("Hello");
test1.print();
//Your code comes here.
getch();
return 0;
}
