//  TODO: Implement a way to determine if the sand overflow exceeds the designated gridspace
#include <iostream>
#include <vector>
using namespace std;

void dropSand(vector<vector<int>>& grid, int row, int col){
    grid[row][col] += 1;
    if (grid[row][col] > 3){
        grid[row][col] = 0;
        dropSand(grid, row+1, col);
        dropSand(grid, row-1, col);
        dropSand(grid, row, col+1);
        dropSand(grid, row, col-1);
    }
}

int main()
{
    vector <vector<int>> grid
    {
        {1,1,1,1,1},
        {1,3,1,1,1},
        {1,3,1,1,1},
        {1,1,1,1,1},
        {1,1,1,1,1}
    };

    for (int i = 0; i< grid.size(); i++){
        for (int j = 0; j<grid[i].size(); j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    dropSand(grid, 1,1);
    cout << endl;

    for (int i = 0; i< grid.size(); i++){
        for (int j = 0; j<grid[i].size(); j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

}