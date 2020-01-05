#include <iostream>
#include <vector>
#include <string>
#include "TNode.h"
#include "Graph.h"
using namespace std;
TNode<char>* createTree(){
    auto *l4 = new TNode<char>('a'), *l8 = new TNode<char>('b'), *lm5 = new TNode<char>('c'),
            *nm6 = new TNode<char>('d', l8, nullptr),
            *nm2 = new TNode<char>('e', l4, nm6),
            *root = new TNode<char>('f', nm2, nm6);
    return root;
}

void getPathsInTree(TNode<char> *t, vector<string>& arr, string s){
    if(t == nullptr)
        return;
    if(t->left== nullptr&&t->right== nullptr) {
        s.push_back(t->data);
        arr.push_back(s);
        return;
    }
    s.push_back(t->data);
    getPathsInTree(t->left,arr,s);
    getPathsInTree(t->right,arr,s);
}
int charToInt(char a){
    return a-'a';
}

bool checkPath(Graph& g, string& path){
    bool flag=false;
    char a=path[0],b=path[1];
    int n=charToInt(a);
    for(int i=2;i<path.length();++i){
        if(!g.find(n,b)){
            return false;
        }
         n=charToInt(b);
         b=path[i];
    }
}
bool path(TNode<char> *t,Graph& g){
    string s;
    vector<string> arr;
    getPathsInTree(t,arr,s);
    for(auto i: arr){
        if(checkPath(g,i)){
            cout<<i<<endl;
            return true;
        }
    }
    return false;
}
int main() {
    TNode<char>* t=createTree();
    Graph g(6);
    g.addEdge(0,4);g.addEdge(4,6);g.addEdge(4,8);
    cout<<path(t,g)<<endl;
    return 0;
}
