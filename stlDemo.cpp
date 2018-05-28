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