#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int isSafe(vector<vector<int>> &grid, int r, int c){
        for (int i=0; i<r; i++){
            if (grid[i][c] == 1) return 0;
        }

        int i=r, j=c;
        while (i>0 && j>0){
            if (grid[--i][--j]==1) return 0;
        }

        i=r, j=c;
        while (i>0 && j<grid.size()-1){
            if (grid[--i][++j]==1) return 0;
        }

        return 1;
    }

    void nQueen(int i, vector<vector<int>>&grid, int& total){
        if (i == grid.size()){ 
            total++;
            return;
        }

        for (int j=0; j<grid.size(); j++){
            if (isSafe(grid, i, j)){
                grid[i][j] = 1;
                nQueen(i+1, grid, total);
                grid[i][j] = 0; //continue finding for more solutions
            }
        }

        return;
    }

    int totalNQueens(int n) {
        vector<vector<int>> grid(n, vector<int>(n, 0)); // the chessboard i will build

        int total = 0;
        nQueen(0, grid, total);
        return total;
    }
};

int main(){
    Solution s = Solution();
    cout << "Input the size of chessboard: ";
    int n; cin>>n;

    cout << "The total possible solutions are: " << s.totalNQueens(n);
}

//What is Lorem Ipsum?
//Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum
