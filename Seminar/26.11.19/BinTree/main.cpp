#include <iostream>
#include "TNode.h"
template <class T>
void printLNR(TNode<T> *root){
    if(root== nullptr)
        return;
    printLNR(root->left);
    std::cout<<root->data;
    printLNR(root->right);
}
int getSumOfPos(TNode<int>* root){
    if(root==nullptr)
        return 0;
    int sum=0;
    if((root->data)>0)
        sum+=root->data;
    sum+=getSumOfPos(root->left);
    sum+=getSumOfPos(root->right);
    return sum;
}
template <class T>
void printLeaves(TNode<T> *root){
    if(root== nullptr)
        return;
    if(root->left== nullptr&&root->right== nullptr){
        std::cout<<root->data<<' ';
        return;
    }
    printLeaves(root->left);
    printLeaves(root->right);
}
int main() {
    TNode<int> node[5];
    node[4]=TNode<int>(4);
    node[2]=TNode<int>(2,&node[4]);
    node[3]=TNode<int>(3);
    node[1]=TNode<int>(-2,&node[3]);
    node[0]=TNode<int>(0,&node[1],&node[2]);
    std::cout<<getSumOfPos(&node[0])<<std::endl;
    printLNR(&node[0]);
    std::cout<<std::endl;
    printLeaves(&node[0]);
    return 0;
}