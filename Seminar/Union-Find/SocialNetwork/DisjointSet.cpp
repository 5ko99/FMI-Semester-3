//
// Created by petko on 15/10/2019.
//

#include "DisjointSet.h"
DisjointSet::DisjointSet(int n) {
    root=new int[n];
    sz=new int[n];
    length=n;
    for(int i=0; i < length; i++){
        root[i]=i;
        sz[i]=1;
    }
}
DisjointSet::DisjointSet(const DisjointSet& ds){
    length=ds.length;
    root=new int[ds.length];
    sz=new int[ds.length];
    for(int i=0; i < length; i++){
        root[i]=ds.root[i];
        sz[i]=ds.sz[i];
    }
};
DisjointSet::~DisjointSet() {
    delete[] root;
    delete[] sz;
}
DisjointSet& DisjointSet::operator=(const DisjointSet & ds){
    if(this!=&ds){
        delete[] root;
        delete[] sz;
        length=ds.length;
        root=new int[length];
        sz=new int[length];
        for(int i=0; i < length; i++){
            root[i]=ds.root[i];
            sz[i]=ds.sz[i];
        }
    }
    return *this;
}
ostream& operator<<(ostream& ostr, DisjointSet const & ds){
    for(int i=0;i<ds.length; i++){
        ostr << ds.root[i] << ' ';
    }
    ostr<<endl;
}
int DisjointSet::getSize(int n) const {
    return sz[n];
}
//Quick-Union Approach
int DisjointSet::getRoot(int p){
//    while (p!=root[p]){
//        p=root[p];
//    }
//    return p;
    if(p == root[p]) return p;
    //Path compression optimization
    root[p]=root[root[p]];
    getRoot(root[p]);
}
bool DisjointSet::checkConnectivity(int p, int q){
    return (getRoot(p)==getRoot(q));
}
bool DisjointSet::connectSets(int p, int q){
    int pRoot = getRoot(p);
    int qRoot = getRoot(q);
    if(pRoot!=qRoot) {
        if (sz[pRoot] < sz[qRoot]) {
            root[pRoot] = qRoot;
            sz[qRoot] += sz[pRoot];
        } else {
            root[qRoot] = pRoot;
            sz[pRoot] += sz[qRoot];
        }
        return true;
    }else{
        return  false;
    }
}