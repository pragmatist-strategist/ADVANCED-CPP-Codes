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
getch();
return 0;
}