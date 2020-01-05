#include <iostream>
#include "TNode.h"
int sumOddRight(TNode<int>* tree, int level){
    if(tree== nullptr)
        return 0;
    int sum=0;
    if(tree->left== nullptr && level%2==1 && tree->right!= nullptr)
        sum+=tree->data;
    return sum+sumOddRight(tree->left,level+1)+sumOddRight(tree->right,level+1);
}
TNode<int>* createTree(){
    TNode<int> *l4 = new TNode<int>(4), *l8 = new TNode<int>(8), *lm5 = new TNode<int>(-5), *lm9 = new TNode<int>(-9),
            *nm6 = new TNode<int>(-6, nullptr, l8), *n7 = new TNode<int>(7, nullptr, lm9),
            *nm2 = new TNode<int>(-2, nullptr, nm6), *nm3 = new TNode<int>(-3, lm5, n7),
            *root = new TNode<int>(1, nm2, nm3);

    return root;
}
int main() {
    TNode<int>* tree=createTree();
    std::cout<<sumOddRight(tree,0);
    return 0;
}
