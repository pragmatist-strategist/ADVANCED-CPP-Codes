//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
// this code matches the number of letters in the word one. since one has 3 letters and so do 1,2,6(during proununciation).
#include <iostream>
#include <algorithm>
#include <vector>
#include <conio.h>
using namespace std;
bool match(string test){
	//return test=="two";
	return test.size()==3;
}

int countStrings(vector<string> &texts, bool(*match)(string text)){

	int tally=0;
	for (int i = 0; i < texts.size(); i++)
	{
		/* code */
		if(match(texts[i])){
			tally++;
		}
		return tally;
	}
}
int main(){

std::vector<string> texts;
texts.push_back("one");
texts.push_back("two");
texts.push_back("three");
texts.push_back("four");
texts.push_back("five");
texts.push_back("six");
texts.push_back("seven");
//texts.push_back("one");

cout<< match("one") <<endl;
cout<<count_if(texts.begin(), texts.end(), match)<<endl;
cout<<countStrings(texts, match)<<endl;

//Your code comes here.
getch();
return 0;
}