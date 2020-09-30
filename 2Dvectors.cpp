//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;
int main(){
	vector< vector<int> > grid(3,vector<int>(4,7));
//Your code comes here.
	/*
	Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.
	*/
	grid[1].push_back(8);
	for (int row = 0; row < grid.size(); row++)
	{
		/* code */
		for(int col=0;col<grid[row].size();col++){
			cout<<grid[row][col]<<flush;
		}
		cout<<endl;
	}
getch();
return 0;
}
