#include <iostream>
#include "DisjointSet.h"
using namespace std;
int main() {
    DisjointSet ds(15);
//    cout<<ds.checkConnectivity(0,1)<<endl;
//    ds.connectSets(0,1);
//    ds.connectSets(0,3);
//    ds.connectSets(5,3);
//    cout<<ds.checkConnectivity(0,1)<<endl;
//    cout<<ds.checkConnectivity(5,0)<<endl;
//    cout<<ds.checkConnectivity(5,1)<<endl;
//    cout<<ds.checkConnectivity(5,4)<<endl;
    ds.connect(0,1);
    ds.connect(0,3);
    cout<<ds.connected(1,3)<<endl;
    ds.connect(3,4);
    cout<<ds.connected(1,4)<<endl;
    return 0;
}