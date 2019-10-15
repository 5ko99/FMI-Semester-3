#include <iostream>
#include "ReadFromFile.h"
#include "DisjointSet.h"
const char* dataFile="../data.txt";
int main() {
    ReadFromFile rf;
    int totalNumber,totalConnections,time,p,q,counter=0,result;
    ifstream data(dataFile,ios::in);
    rf.initialRead(data,totalNumber,totalConnections);
    DisjointSet ds(totalNumber);
    for(int i=0;i<totalConnections;i++){
        if(counter==totalNumber){
            cout<<time;
        }
        rf.read(data,time,p,q);
        ds.connectSets(p,q);
        //TODO:I don't get it how to do it...Need to add it
        //Not sure
        counter++;
    }
    data.close();
    return 0;
}