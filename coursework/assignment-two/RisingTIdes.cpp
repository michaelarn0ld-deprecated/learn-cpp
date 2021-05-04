#include <vector>
#include <map>
#include <queue>
#include <iostream>
using namespace std;


// helper function to find the neighbors of squares within the grid!
vector<map<string, int>> squareNeighbors(int gridSize, map<string, int> currentSquare){
    vector<map<string, int>> neighbors;
    if (currentSquare["row"] + 1 <= (gridSize - 1)){
        neighbors.push_back({{"row",currentSquare["row"]+1},{"col",currentSquare["col"]}});
    }
    if (currentSquare["row"] - 1 >= 0){
        neighbors.push_back({{"row",currentSquare["row"]-1},{"col",currentSquare["col"]}});
    }
    if (currentSquare["col"] + 1 <= (gridSize - 1)){
        neighbors.push_back({{"row",currentSquare["row"]},{"col",currentSquare["col"]+1}});
    }
    if (currentSquare["col"] - 1 >= 0){
        neighbors.push_back({{"row",currentSquare["row"]},{"col",currentSquare["col"]-1}});
    }
    return neighbors;
}

// main function who takes a grid and starting flood sources and floods the appropriate squares
vector<vector<bool>> floodedRegions(const vector<vector<int>>& terrain,
                                    const vector<map<string,int>>& sources, 
                                    int height)
{
    // Initialize a grid of booleans to represent if the grid is flooded (true) or if it is dry (false)
    vector<vector<bool>> floodedTerrain;
    for (int i = 0; i < terrain.size(); i++){
        vector<bool> floodedTerrainRow;
        for (int j = 0; j < terrain[i].size(); j++){
            floodedTerrainRow.push_back(false);
        }
        floodedTerrain.push_back(floodedTerrainRow);
    }

    // take any amount of initial water sources and attempt to flood the designated square
    // on success queue them up and see if they can flood adjacent squares
    queue<map<string, int>> floodSource;
    for (int i = 0; i < sources.size(); i++){
        map <string, int> source = sources[i];
        int row = source["row"];
        int col = source["col"];
        if (terrain[row][col] <= height){
            floodedTerrain[row][col] = true;
            floodSource.push(source);
        }
    }

    // handle the queue of floodSources
    while (!floodSource.empty()){
        map <string, int> source = floodSource.front();
        floodSource.pop();
        vector<map<string, int>> adjacents = squareNeighbors(terrain.size(), source);
        for (map<string, int> adjacent : adjacents){
            int row  = adjacent["row"];
            int col = adjacent["col"];
            if (terrain[row][col] <= height && !floodedTerrain[row][col]){
                floodedTerrain[row][col] = true;
                floodSource.push(adjacent);
            }
        }
    }


    return floodedTerrain;
}

int main(){
    vector<vector<int>> grid {{-1,0,0,4,0,0,1},{0,0,4,0,-1,-1,0},{0,4,0,0,0,0,0},{4,0,-1,-1,0,0,3},{0,-1,-2,-1,0,3,0},{0,0,-1,0,3,0,0},{0,0,0,3,0,0,-1}};
    vector<map<string,int>> water {{{"row",0},{"col",0}}, {{"row",6},{"col",6}}};
    vector<vector<bool>> boolGrid = floodedRegions(grid,water,2);
    for (int i = 0; i < boolGrid.size(); i++){
        for (int j = 0; j < boolGrid[i].size(); j++){
            cout << boolGrid[i][j] << " ";
        }
        cout << endl;
    }
}
