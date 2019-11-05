#include <iostream>
#include <fstream>
#include <queue>
using namespace std;
const char* path="../data.txt";
queue<int> twoQueueToOne(queue<int>,queue<int>);
void readData(const char* path,queue<int>& q1,queue<int>& q2){
    ifstream f(path);
    int n,p;
    f>>n;
    f>>p;
    int temp;
    for(int i=0;i<n;i++){
        f>>temp;
        q1.push(temp);
    }
    for(int i=0;i<p;i++){
        f>>temp;
        q2.push(temp);
    }
    f.close();
}
void printQ(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<' ';
        q.pop();
    }
    cout<<endl;
}
int main() {
    queue<int> q1,q2,resultQueue;
    readData(path,q1,q2);
    printQ(q1);
    printQ(q2);
    resultQueue=twoQueueToOne(q1,q2);
    printQ(resultQueue);
    return 0;
}
queue<int> twoQueueToOne(queue<int> q1,queue<int> q2){
    queue<int> q;
    int x,y;
    while(!q1.empty() && !q2.empty()){
        x=q1.front();
        y=q2.front();
        if(x<=y){
            q.push(x);
            q1.pop();
        }
        else{
            q.push(y);
            q2.pop();
        }
    }
    while(!q1.empty()){
        x=q1.front();
        q1.pop();
        q.push(x);
    }
    while(!q2.empty()){
        x=q2.front();
        q2.pop();
        q.push(x);
    }
    return q;
}
