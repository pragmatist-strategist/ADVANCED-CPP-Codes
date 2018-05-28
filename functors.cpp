//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
// it checks for true or false ...
#include <iostream>
#include <conio.h>
using namespace std;
struct Test{
	virtual bool operator()(string &text)=0;
	virtual ~Test(){}
};
// below is the functor --> a kind of true / false checker.
struct MatchTest: public Test{
	bool operator()(string &text){
		return text=="Lion";
	}
};
void check(string text, Test &test){
	if (test(text))
	{
		cout<<"Text matches!"<<endl;
	}
	else{
		cout<<"No match"<<endl;
	}
}
int main(){
	MatchTest pred;
	//string value="Lien";
	string value="Lion";
	MatchTest m;
	check("Lions", m);

	//cout<<pred(value)<<endl;
//Your code comes here.
	getch();
	return 0;
}