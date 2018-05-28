//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <conio.h>
#include <algorithm>
#include <vector>
using namespace std;

class test
{
	int id;
	string name;

public:
	test(int id, string name):id(id), name(name) {}
	
	void print(){
		cout<<id<<": "<<name<<endl;
	}
	// bool operator<(const test& other)const{
	// 	return name < other.name;
	// }
	friend bool comp(const test &a, const test &b);
};
bool comp(const test &a, const test &b){
	return a.name < b.name ;
}
int main(){
	std::vector<test> tests;
	tests.push_back(test(5, "tim"));
	tests.push_back(test(15, "lim"));
	tests.push_back(test(25, "him"));
	tests.push_back(test(35, "jim"));

	sort(tests.begin(), tests.end(), comp);
	for (int i = 0; i < tests.size(); i++)
	{
		tests[i].print();
	};
//Your code comes here.
	getch();
	return 0;
}