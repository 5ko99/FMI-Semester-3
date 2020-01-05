//
// Created by petko on 05/01/2020.
//

#ifndef GRAPHTREE2_GRAPH_H
#define GRAPHTREE2_GRAPH_H

#include <iostream>
#include <list>
#include <vector>
#include <queue>
using namespace std;
class Graph{
    int V;
    vector<vector<char>> adj;
public:
    explicit Graph(int V);
    void addEdge(int v, char w);
    bool find(int,char);
};

Graph::Graph(int V){
    this->V = V;
    adj=vector<vector<char>>(V);
}
bool Graph::find(int pos, char b){
    for(auto i: adj[pos]){
        if(i==b) return true;
    }
    return false;
}
void Graph::addEdge(int v, char w){
    adj[v].push_back(w);
    //adj[w].push_back(v);
}
#endif //GRAPHTREE2_GRAPH_H
