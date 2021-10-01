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
// }
// What is Lorem Ipsum?
// Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.

// Why do we use it?
// It is a long established fact that a reader will be distracted by the readable content of a page when looking at its layout. The point of using Lorem Ipsum is that it has a more-or-less normal distribution of letters, as opposed to using 'Content here, content here', making it look like readable English. Many desktop publishing packages and web page editors now use Lorem Ipsum as their default model text, and a search for 'lorem ipsum' will uncover many web sites still in their infancy. Various versions have evolved over the years, sometimes by accident, sometimes on purpose (injected humour and the like).
