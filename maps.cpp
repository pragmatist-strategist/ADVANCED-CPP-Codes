//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <conio.h>
#include <map>
using namespace std;
int main(){
//Your code comes here.
	std::map<string, int> ages;
	ages["mike"]=40;
	ages["Raj"]=30;
	ages["vicky"]=20;
	cout<<ages["Raj"]<<endl;
	for (std::map<string, int> ::iterator it = ages.begin(); it != ages.end(); it++)
	{
	cout<< it->first<<": "<<it->second<<endl;	
	}
	
	/*
	Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.
	*/
getch();
return 0;
}
