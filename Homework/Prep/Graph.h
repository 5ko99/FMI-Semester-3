#ifndef PREP_GRAPH_H
#define PREP_GRAPH_H

#include <iostream>
#include <list>
#include <vector>
#include <queue>
using namespace std;
class Graph{
    int V;
    vector<list<int>> adj;
    void DFSUtil(int s, vector<bool>& visited);
public:
    explicit Graph(int V=0);

    void addEdge(int v, int w);

    void BFS(int s=0);
    void DFS(int s=0);
};

Graph::Graph(int V){
    this->V = V;
    adj=vector<list<int>>(V);
}

void Graph::addEdge(int v, int w){
    adj[v].push_back(w);
    //For not oriented
    adj[w].push_back(v);
}

void Graph::BFS(int s){
    vector<bool> visited(V);
    for(int i = 0; i < V; i++)
        visited[i]=false;
    queue<int> queue;

    visited[s] = true;
    queue.push(s);

    list<int>::iterator i;
    while(!queue.empty()){
        s = queue.front();
        cout << s << " ";
        queue.pop();
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
            if (!visited[*i]){
                visited[*i]= true;
                queue.push(*i);
            }
    }
}

void Graph::DFSUtil(int s, vector<bool>& visited){
    visited[s] = true;
    cout << s << " ";

    list<int>::iterator i;
    for (i = adj[s].begin(); i != adj[s].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}
void Graph::DFS(int s){
    vector<bool> visited(V);
    for (int i = 0; i < V; ++i)
        visited[i] = false;

    DFSUtil(s, visited);
}


#endif //PREP_GRAPH_H
