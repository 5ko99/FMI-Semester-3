#include <iostream>
#include <queue>
#include <vector>
using namespace std;
bool willApplesRot(vector<vector<int>>, int& time);
void inputVector(vector<vector<int>>& v, int n, int m){
    vector<int> tempV;
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>temp;
            tempV.push_back(temp);
        }
        v.push_back(tempV);
        tempV.clear();
    }
}
int main() {
    int n,m,time;
    cin>>n>>m;
    vector<vector<int>> box;
    inputVector(box,n,m);
    cout<<willApplesRot(box, time)<<endl;
    cout<<"Time:"<<time<<endl;
    return 0;
}
bool willApplesRot(vector<vector<int>> box, int& time){
    const pair<int,int> dummy(-1,-1);
    time=0;
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
    //Dummy Element
    q.push(dummy);
    while(!q.empty()){
        pair<int,int> p=q.front();
        q.pop();
        //if it's dummy element
        if(p==dummy){
            time++;
            q.push(dummy);
        }
        //Right
        if(p.second+1<m && box[p.first][p.second+1]==1){
            box[p.first][p.second+1]=2;
            q.push(pair<int,int>(p.first,p.second+1));
            counter--;
            if(counter==0) return true;
        }
        //Left
        if(p.second-1>=0 && box[p.first][p.second-1]==1){
            box[p.first][p.second-1]=2;
            q.push(pair<int,int>(p.first,p.second-1));
            counter--;
            if(counter==0) return true;
        }
        //Down
        if(p.first+1<n && box[p.first+1][p.second]==1){
            box[p.first+1][p.second]=2;
            q.push(pair<int,int>(p.first+1,p.second));
            counter--;
            if(counter==0) return true;
        }
        //Up
        if(p.first-1>=0 && box[p.first-1][p.second]==1){
            box[p.first-1][p.second]=2;
            q.push(pair<int,int>(p.first-1,p.second));
            counter--;
            if(counter==0) return true;
        }
    }
}
