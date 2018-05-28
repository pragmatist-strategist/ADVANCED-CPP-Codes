//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <conio.h>
#include <list>
using namespace std;
int main(){
list<int> numbers;
numbers.push_back(1);
numbers.push_back(2);
numbers.push_back(3);
numbers.push_back(4);
numbers.push_front(0);
list<int>::iterator it = numbers.begin();
it++;
numbers.insert(it,100);
cout<<"1st element in the list :"<< *it<<endl;
list<int>::iterator  eraseIt = numbers.begin();
eraseIt++;
eraseIt=numbers.erase(eraseIt);
cout<<"Erase points to :"<< *eraseIt<<endl; 
for (std::list<int>::iterator it = numbers.begin(); it!= numbers.end();)
{
	if (*it==2)
	{
		numbers.insert(it,1234);
		/* code */
	}
	if (*it==1)
	{
		/* code */
		numbers.erase(it);
	}
	else{
		it++;
	}
	
}
for (std::list<int>::iterator it = numbers.begin(); it!= numbers.end(); it++)
{
	cout<< *it<<endl;
	
}
//Your code comes here.
getch();
return 0;
}