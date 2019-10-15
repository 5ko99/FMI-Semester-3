#include <iostream>
#include "DisjointSet.h"
using namespace std;
int main() {

//    cout<<ds.checkConnectivity(0,1)<<endl;
//    ds.connectSets(0,1);
//    ds.connectSets(0,3);
//    ds.connectSets(5,3);
//    cout<<ds.checkConnectivity(0,1)<<endl;
//    cout<<ds.checkConnectivity(5,0)<<endl;
//    cout<<ds.checkConnectivity(5,1)<<endl;
//    cout<<ds.checkConnectivity(5,4)<<endl;
//    ds.connect(0,1);
//    ds.connect(0,3);
//    cout<<ds.connected(1,3)<<endl;
//    ds.connect(3,4);
//    cout<<ds.connected(1,4)<<endl;
    int time,counter=0;
    ifstream inFile;inFile.open("../example2.txt",ios::in);
    int totalNumber=-1, totalConnections;
    inFile>>totalNumber>>totalConnections;
    cout<<totalNumber;
    DisjointSet ds(totalNumber);
    for(int i=0;i<totalConnections;i++){
        int p,q;
        inFile>>time;
        inFile.get();
        inFile>>p>>q;
        ds.connect(p,q);
        if(ds.sz[ds.getRoot(p)]+ds.sz[ds.getRoot(q)]==totalNumber-1){
            cout<<"E";
            cout<<time<<endl;
            break;
        };
    }
    inFile.close();

    return 0;
}