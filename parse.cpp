//Pranav Sharma
//"If the task to be done is IMPOSSIBLE, then I must try dying rather than quitting it."
#include <iostream>

#include <conio.h>
#include <fstream>
using namespace std;
int main(){
	string filename="population.txt";
	ifstream input;
	input.open("population.txt");
	if(!input.is_open()){
		return 1;
	}
	while(input){
		string line;
		getline(input,line,':');
	
	int population;
	input>>population;
	input.get();
	if(!input){
		break;
	}
	cout<<line<<"---"<<population<<endl;
}
input.close();
getch();
return 0;
}