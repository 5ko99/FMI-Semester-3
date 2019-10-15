//
// Created by petko on 08/10/2019.
//

#include "DisjointSet.h"
DisjointSet::DisjointSet(int n) {
    element=new int[n];
    sz=new int[n];
    lenght=n;
    for(int i=0;i<lenght;i++){
        element[i]=i;
        sz[i]=1;
    }
}
DisjointSet::DisjointSet(const DisjointSet& ds){
    lenght=ds.lenght;
    element=new int[ds.lenght];
    sz=new int[ds.lenght];
    for(int i=0;i<lenght;i++){
        element[i]=ds.element[i];
        sz[i]=ds.sz[i];
    }
};
DisjointSet::~DisjointSet() {
    delete[] element;
    delete[] sz;
}
DisjointSet& DisjointSet::operator=(const DisjointSet & ds){
    if(this!=&ds){
        delete[] element;
        delete[] sz;
        lenght=ds.lenght;
        element=new int[ds.lenght];
        sz=new int[ds.lenght];
        lenght=ds.lenght;
        for(int i=0;i<lenght;i++){
            element[i]=ds.element[i];
            sz[i]=ds.sz[i];
        }
    }
    return *this;
}
ostream& operator<<(ostream& ostr, DisjointSet const & ds){
    for(int i=0;i<ds.lenght;i++){
        ostr<<ds.element[i]<<' ';
    }
    ostr<<endl;
}
void DisjointSet::connectSets(int p, int q) {
    if(element[p!=element[q]]) {
        const int idP = element[p];
        const int idQ=element[q];
        for (int i = 0; i < lenght; i++) {
            if (element[i] == idP) element[i] = idQ;
        }
    }
}
bool DisjointSet::checkConnectivity(int p, int q) const {
    return (element[p]==element[q]);
}

//For Quick-Union approach
int DisjointSet::getRoot(int p){
//    while (p!=element[p]){
//        p=element[p];
//    }
//    return p;
    if(p==element[p]) return p;
    //Path compression optimization
    element[p]=element[element[p]];
    getRoot(element[p]);
}
bool DisjointSet::connected(int p, int q) {
    return (getRoot(p)==getRoot(q));
}
void DisjointSet::connect(int p, int q) {
    int pRoot = getRoot(p);
    int qRoot = getRoot(q);
    if(pRoot!=qRoot) {
        if (sz[pRoot] < sz[qRoot]) {
            element[pRoot] = qRoot;
            sz[qRoot] += sz[pRoot];
        } else {
            element[qRoot] = pRoot;
            sz[pRoot] += sz[qRoot];
        }
    }
}