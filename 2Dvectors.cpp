//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;
int main(){
	vector< vector<int> > grid(3,vector<int>(4,7));
//Your code comes here.
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