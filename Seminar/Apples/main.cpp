#include <iostream>
#include <queue>
#include <vector>
using namespace std;
bool willApplesRot(vector<vector<int>>);
int main() {

    return 0;
}
bool willApplesRot(vector<vector<int>> box){
    int n=box.size();
    int m=box[1].size();
    queue<pair<int,int>> q;
    int counter =0;
    for(int i=0;i<box.size();i++){
        for(int j=0;j<box[i].size();j++){
            if(box[i][j]==2){
                q.push(pair<int,int>(i,j));
            }
            if(box[i][j]==1) counter++;
        }
    }
    while(!q.empty()){
        pair<int,int> p=q.front();
        q.pop();
        //Check for four sides
        if(box[p.first][p.second+1]==1 && p.second+1<m){
            box[p.first][p.second+1]=2;
            q.push(pair<int,int>(p.first,p.second+1));
            counter--;
            if(counter==0) return true;
        }
    }
}
