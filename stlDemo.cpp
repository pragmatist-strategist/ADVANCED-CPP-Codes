//Pranav Sharma
#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;
int main(){
	vector<string> strings;
	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");
	for (int i = 0; i < strings.size(); ++i)
	{
		cout<<strings[i]<<endl;
	}
	vector<string>::iterator it = strings.begin(); 
	it+=2;
	cout<< *it<<endl;
	// strings.begin();
	// cout<<strings.size()<<endl;
    getch();
    
	return 0;
}
/*
Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.
*/
