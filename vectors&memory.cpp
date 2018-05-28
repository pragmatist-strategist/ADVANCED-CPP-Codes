#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<double> numbers(0);
	cout<<"Size "<<numbers.size()<<endl;
	int capacity=numbers.capacity();
	cout<<"capacity "<<capacity<<endl;
	for(int i=0;i<1000;i++){
		if(numbers.capacity()!=capacity){
			capacity=numbers.capacity();
			cout<<"capacity "<<capacity<<endl;
		}
		numbers.push_back(i);

	}
	numbers.reserve(19000);
	cout<<numbers[2]<<endl;
	// numbers.clear(100);
	// numbers.resize(100);
	cout<<"Size: "<<numbers.size()<<endl;
	cout<<"capacity: "<<numbers.capacity()<<endl;
	// whats the diff b/w size and capacity?
	getch();
	return 0;
}