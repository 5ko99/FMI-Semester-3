//
// Created by petko on 08/10/2019.
//

#ifndef GRAPHS_DISJOINTSET_H
#define GRAPHS_DISJOINTSET_H
using namespace std;

#include <fstream>

class DisjointSet {
    public:
    int *element;
    int lenght;
    int *sz;
    explicit DisjointSet(int=0);
    DisjointSet(const DisjointSet&);
    ~DisjointSet();
    friend ostream& operator<<(ostream&, DisjointSet const & );

    DisjointSet& operator=(const DisjointSet&);
    bool checkConnectivity(int, int) const;
    void connectSets(int,int);
    //For Quick-Union approach
    int getRoot(int);
    bool connected(int,int);
    void connect(int,int);
};


#endif //GRAPHS_DISJOINTSET_H
