#include <iostream>
#include <string>
#include "TNode.h"
#include "BinTree.h"
TNode<int>* createTree()
{
    auto *l4 = new TNode<int>(4), *l8 = new TNode<int>(8), *lm5 = new TNode<int>(-5), *lm9 = new TNode<int>(-9),
            *nm6 = new TNode<int>(-6, l8, nullptr), *n7 = new TNode<int>(7, nullptr, lm9),
            *nm2 = new TNode<int>(-2, l4, nm6), *nm3 = new TNode<int>(-3, lm5, n7),
            *root = new TNode<int>(1, nm2, nm3);

    return root;
}

template <class T>
T findByTrack(TNode<T>* root, const char* track){
    if(root == nullptr) {
        std::cerr << "Wrong track! \n";
        return T();
    }
    if(*track=='\0'){
        return root->data;
    }//Leaf
    if(*track=='l')
        return findByTrack(root->left,track+1);
    else
        return findByTrack(root->right,track+1);
}
template <class T>
TNode<T>* createMirrorTree(TNode<T> *root){
    if(root== nullptr)
        return nullptr;
    auto *result= new TNode<T>(root->data);
    result->left=createMirrorTree(root->right);
    result->right=createMirrorTree(root->left);
    return result;
}


BinTree<int> createBinTree(){
    BinTree<int> empty, t4, t8, tm5, tm9, tm6, t7, tm2, tm3, t;
    t4.createWithData(4, empty, empty);
    tm5.createWithData(-5, empty, empty);
    t8.createWithData(8, empty, empty);
    tm9.createWithData(-9, empty, empty);
    tm6.createWithData(-6, t8, empty);
    t7.createWithData(7, empty, tm9);
    tm2.createWithData(-2, t4, tm6);
    tm3.createWithData(-3, tm5, t7);
    t.createWithData(1, tm2, tm3);

    return t;
}

template <class T>
BinTree<T> createMirror2(BinTree<T> const & t){
    BinTree<T> result;
    if(t.isEmpty())
        return result;
    result.createWithData(t.getRootData(),createMirror2(t.getRightTree()),createMirror2(t.getLeftTree()));
    return result;
}
template <class T>
BinTree<T> createIntersectionTree(BinTree<T> const & t1, BinTree<T> const & t2){
    BinTree<T> result;
    if(t1.isEmpty()||t2.isEmpty())
        result;
    if(t1.getRootData()==t2.getRootData()){
        result.createWithData(t1.getRootData(),createIntersectionTree(t1.getLeftTree(),t2.getLeftTree()),
                createIntersectionTree(t1.getRightTree(),t2.getRightTree()));

    }
}

BinTree<int> addTo(BinTree<int> t, int x){
    BinTree<int> result;
    if(t.isEmpty())
        return result;
    result.createWithData(t.getRootData()+x,addTo(t.getLeftTree(),x),addTo(t.getRightTree(),x));
}



int main() {
    TNode<int> *root;
    root=createTree();
    std::string track;
    std::cout<<"Track:";
    std::cin>>track;
    std::cout<<"Element ot track "<<track<<" is:"<<findByTrack(root,track.c_str())<<std::endl;

    //Mirror tree
    TNode<int> *mirrorRoot=createMirrorTree(root);
    std::cout<<"Element ot track "<<track<<" is:"<<findByTrack(mirrorRoot,track.c_str())<<std::endl;

    //For BinTree Class
    BinTree<int> tree,mTree;
    tree=createBinTree();
    mTree=createMirror2(tree);
    std::cout<<mTree.getRightTree().getRootData()<<'\n';
    std::cout<<tree.getRightTree().getRootData()<<'\n';
    return 0;
}
