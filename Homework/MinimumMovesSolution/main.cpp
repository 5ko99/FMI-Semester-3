#include <iostream>
#include<queue>
#include <vector>
#include <string>
#include <utility>
using namespace std;
bool isInside(int nx, int ny, vector<string> & grid) {
    return (nx >= 0 && nx < grid.size() && ny >= 0 && ny < grid.size());
}
int getMinimumMoves(vector<string> grid, pair<int,int> start ,pair<int,int> end) {
    if(start==end)
        return 0;
    queue<pair<int, int>> q;
    pair<int, int> dirs[4] = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };
    vector<vector<int>> minMove(grid.size(), vector<int>(grid.size(), 0));
    q.push(start);
    minMove[start.first][start.second] = 1;
    while (!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();
        //Look on all directions
        for (auto & dir : dirs) {
            for (int range = 1; range < grid.size(); range++) { // NOLINT(bugprone-too-small-loop-variable)
                int nx = (dir.first * range) + cur.first;
                int ny = (dir.second * range) + cur.second;
                if ((isInside(nx, ny, grid) && (grid[nx][ny] == 'X' || grid[nx][ny]=='x')) || !isInside(nx, ny, grid)) {
                    break; // To Next Direction
                }
                if (!minMove[nx][ny]) {
                    if (nx == end.first && ny == end.second) {
                        return minMove[cur.first][cur.second];
                    }
                    q.push({nx, ny});
                    minMove[nx][ny] = minMove[cur.first][cur.second] + 1;
                }
            }
        }
    }
    return -1;
}
int main() {
    int n;
    cin>>n;
    string line;
    vector<string> grid;
    for(int i=0;i<n;i++){
        cin>>line;
        grid.push_back(line);
    }
    pair<int,int> start,end;
    cin>>start.first>>start.second>>end.first>>end.second;
    cout<<getMinimumMoves(grid,start,end)<<endl;
    return 0;
}