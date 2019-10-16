//
// Created by petko on 15/10/2019.
//

#ifndef SOCIALNETWORK_DISJOINTSET_H
#include<fstream>
using  namespace std;
#define SOCIALNETWORK_DISJOINTSET_H


class DisjointSet {
    int* root;
    int length;
    int* sz;
public:
    explicit DisjointSet(int=0);
    DisjointSet(const DisjointSet&);
    ~DisjointSet();
    DisjointSet& operator=(const DisjointSet&);
    friend ostream& operator<<(ostream&, DisjointSet const & );

    int getRoot(int);
    bool checkConnectivity(int,int);
    bool connectSets(int,int);
    int getSize(int) const;

};


#endif //SOCIALNETWORK_DISJOINTSET_H
