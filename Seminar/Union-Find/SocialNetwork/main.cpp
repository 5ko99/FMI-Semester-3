#include <iostream>
#include "ReadFromFile.h"
#include "DisjointSet.h"
const char* dataFile="../data.txt";
int main() {
    ReadFromFile rf;
    bool flag=true;
    int totalNumber,totalConnections,time,p,q,counter=0,result;
    ifstream data(dataFile,ios::in);
    rf.initialRead(data,totalNumber,totalConnections);
    DisjointSet ds(totalNumber);
    for(int i=0;i<totalConnections;i++){
        if(counter==totalNumber){
            cout<<time;
        }
        rf.read(data,time,p,q);
        if(ds.connectSets(p,q)){
            counter++;
        }
        if(counter==totalNumber-1 && flag){
            cout<<time<<endl;
            flag=!flag;
        }
    }
    data.close();
    return 0;
}