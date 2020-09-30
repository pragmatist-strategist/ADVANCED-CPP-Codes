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

/*
Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.*/
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
