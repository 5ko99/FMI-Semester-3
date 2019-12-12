#include <iostream>
#include "TNode.h"
#include "MNode.h"
#include <queue>
using Q=std::queue<int>;
void getNthLevel(TNode<int> *root,int n,Q& q){
    if(root== nullptr) return;
    if(n==0){
        q.push(root->data);
        return;
    }
    getNthLevel(root->left,n-1,q);
    getNthLevel(root->right,n-1,q);
}
TNode<int>* createTree()
{
    auto *l4 = new TNode<int>(4), *l8 = new TNode<int>(8), *lm5 = new TNode<int>(-5), *lm9 = new TNode<int>(-9),
            *nm6 = new TNode<int>(-6, l8, nullptr), *n7 = new TNode<int>(7, nullptr, lm9),
            *nm2 = new TNode<int>(-2, l4, nm6), *nm3 = new TNode<int>(-3, lm5, n7),
            *root = new TNode<int>(1, nm2, nm3);

    return root;
}
void printQ(Q& q){
    while(!q.empty()){
        std::cout<<q.front()<<' ';
        q.pop();
    }
    std::cout<<'\n';
}
template<class T>
T max(T a,T b){
    return  a>=b? a: b;
}
template <class T>
int getHeight(TNode<T>* root){
    if(root == nullptr) return 0;
    int lh=getHeight(root->left),rh=getHeight(root->right);
    return 1+max(lh,rh);
}
template <class T>
void printByLevels(TNode<T>* root){
    std::queue<TNode<T>*> q;
    TNode<T>* dummy= nullptr;
    q.push(root);
    q.push(dummy);
    while(!q.empty()){
        TNode<T>* current=q.front();
        q.pop();
        if(current!= dummy){
            std::cout<<current->data<<' ';
            if(current->left!= nullptr)
                q.push(current->left);
            if(current->right!= nullptr)
                q.push(current->right);
        }else{
            std::cout<<'\n';
            if(!q.empty())
                q.push(dummy);
        }
    }
}
template <class T>
void addNumber(TNode<T>* root,int n){
    if(root== nullptr)
        return;
    root->data+=n;
    addNumber(root->left,n);
    addNumber(root->right,n);
}

//TODO: Test Function
template <class T>
bool checkMirrorTrees(TNode<T>* r1, TNode<T>* r2){
    if(r1== nullptr&&r2== nullptr)
        return true;
    if(r1== nullptr || r2== nullptr)
        return false;
    return r1->data==r2->data && checkMirrorTrees(r1->left,r2->right) && checkMirrorTrees(r1->right,r2->left);
}
template <typename T>
bool isTreeSymmetry(TNode<T>* t){
    return checkMirrorTrees(t->left,t->right);
}

//MNode
template <class T>
void printMNodeLeaves(MNode<T>* root){
    if(root== nullptr)
        return;
    std::cout<<root->data;
    for(auto it=root->children.begin();it;++it){
        printMNodeLeaves(*it);
    }
}
int main() {
    TNode<int> *root;
    root=createTree();
    Q q;
    int n;

    std::cout<<"Print elements on level: \n";
    std::cin>>n;
    std::cout<<"Elem on level:"<<n<<std::endl;
    getNthLevel(root,n,q);
    printQ(q);

    std::cout<<'\n';
    std::cout<<"Height:";
    std::cout<<getHeight(root)<<std::endl;

    std::cout<<'\n';
    std::cout<<"Graph by levels:"<<std::endl;
    printByLevels(root);

    std::cout<<"Input number witch to add to every node: \n";
    std::cin>>n;
    std::cout<<"Add "<<n<<" to every node: \n";
    addNumber(root,n);
    printByLevels(root);

    std::cout<<"Is tree symmetry \n";
    std::cout<<isTreeSymmetry(root)<<std::endl;
    return 0;
}