//
// Created by petko on 05/01/2020.
//

#ifndef BINORDTREE3_BINORDTREE_H
#define BINORDTREE3_BINORDTREE_H

#include "TNode.h"
#include <iostream>
template <typename T>
class BinOrdTree {
private:
    TNode<T> *root;
    void copyTree(TNode<T>*&, TNode<T>* const&) const;
    void deleteTree(TNode<T>*&);
    void printTree(TNode<T> *) const;

    void add(TNode<T> * &, T const &) const;
    void minTree(T &, BinOrdTree<T> &) const;
public:
    BinOrdTree();
    BinOrdTree(BinOrdTree<T> const&);
    BinOrdTree<T>& operator=(BinOrdTree<T> const&);
    ~BinOrdTree();

    void create();
    void createWithData(T const&, BinOrdTree<T> const&, BinOrdTree<T> const&);

    T getRootData() const;
    TNode<T>* getRootPtr() const;
    BinOrdTree<T> getLeftTree() const;
    BinOrdTree<T> getRightTree() const;

    bool isEmpty() const;
    void print() const;

    void addNode(T const &);
    void deleteNode(T const &);
};
template <typename T>
BinOrdTree<T>::BinOrdTree() {
    root = nullptr;
}

template <typename T>
BinOrdTree<T>::BinOrdTree(BinOrdTree<T> const& t) {
    copyTree(root, t.root);
}

template <typename T>
BinOrdTree<T>& BinOrdTree<T>::operator=(BinOrdTree<T> const& t) {
    if (this != &t) {
        deleteTree(root);
        copyTree(root, t.root);
    }
    return *this;
}

template <typename T>
BinOrdTree<T>::~BinOrdTree() {
    deleteTree(root);
}

template <typename T>
void BinOrdTree<T>::copyTree(TNode<T> *& destRoot, TNode<T> * const &sourceRoot) const {
    if (sourceRoot == nullptr) {
        destRoot = nullptr;
        return;
    }
    destRoot = new TNode<T>(sourceRoot->data);
    copyTree(destRoot->left, sourceRoot->left);
    copyTree(destRoot->right, sourceRoot->right);
}

template <typename T>
void BinOrdTree<T>::deleteTree(TNode<T> *&root) {
    if (root == nullptr)
        return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
    root = nullptr;
}

template <typename T>
void BinOrdTree<T>::create() {
    root = nullptr;
    T nodeValue; char hasNextNode;
    do {
        std::cout << "> ";
        std::cin >> nodeValue;
        addNode(nodeValue);
        std::cout << "next element y/n? ";
        std::cin >> hasNextNode;
    } while (hasNextNode == 'y');
}

template <typename T>
void BinOrdTree<T>::createWithData(T const&x, BinOrdTree<T> const& leftTree, BinOrdTree<T> const& rightTree) {
    if (root != nullptr)
        deleteTree(root);
    root = new TNode<T>(x);
    copyTree(root->left, leftTree.root);
    copyTree(root->right, rightTree.root);
}

template <typename T>
T BinOrdTree<T>::getRootData() const {
    if (isEmpty()) {
        std::cerr << "Error: empty tree";
        return T();
    }

    return root->data;
}

template <typename T>
TNode<T>* BinOrdTree<T>::getRootPtr() const {
    if (isEmpty()) {
        std::cerr << "Error: empty tree";
        return nullptr;
    }

    return root;
}

template <typename T>
BinOrdTree<T> BinOrdTree<T>::getLeftTree() const {
    BinOrdTree<T> t;

    if (isEmpty()) {
        std::cerr << "Error: empty tree";
        return t;
    }

    copyTree(t.root, root->left);
    return t;
}

template <typename T>
BinOrdTree<T> BinOrdTree<T>::getRightTree() const {
    BinOrdTree<T> t;

    if (isEmpty()) {
        std::cerr << "Error: empty tree";
        return t;
    }

    copyTree(t.root, root->right);
    return t;
}

template <typename T>
bool BinOrdTree<T>::isEmpty() const {
    return root == nullptr;
}

template <typename T>
void BinOrdTree<T>::print() const {
    printTree(root);
}

template <typename T>
void BinOrdTree<T>::printTree(TNode<T> *root) const {
    if (root == nullptr)
        return;
    printTree(root->left);
    std::cout << root->data << ' ';
    printTree(root->right);
}

template <typename T>
void BinOrdTree<T>::add(TNode<T> * &node, T const &x) const {
    if (node == nullptr) {
        node = new TNode<T>(x);
        return;
    }

    if (x < node->data)
        add(node->left, x);
    else
        add(node->right, x);
}

template <typename T>
void BinOrdTree<T>::addNode(T const &x) {
    add(root, x);
}

template <typename T>
void BinOrdTree<T>::minTree(T &x, BinOrdTree<T> &mint) const
{
    T a = getRootData();
    if (getLeftTree().isEmpty())
    {
        x = a;
        mint = getRightTree();
    }
    else
    {
        BinOrdTree<T> t, t1 = getRightTree();
        getLeftTree().minTree(x, t);
        mint.createWithData(a, t, t1);
    }
}

template <typename T>
void BinOrdTree<T>::deleteNode(T const & x) {
    if (root) {

        T a = getRootData();
        if (a == x && root->left == nullptr) {
            *this = getRightTree();
            return;
        }
        if (a == x && root->right == nullptr) {
            *this = getLeftTree();
            return;
        }
        if (a == x) {
            T rootValue;
            BinOrdTree<T> leftTree = getLeftTree(), rightTree;
            getRightTree().minTree(rootValue, rightTree);
            createWithData(rootValue, leftTree, rightTree);
            return;
        }
        if (x < a) {
            BinOrdTree<T> leftTree, rightTree = getRightTree();
            *this = getLeftTree();
            deleteNode(x);
            leftTree = *this;
            createWithData(a, leftTree, rightTree);
            return;
        }
        if (x > a) {
            BinOrdTree<T> leftTree = getLeftTree(), rightTree;
            *this = getRightTree();
            deleteNode(x);
            rightTree = *this;
            createWithData(a, leftTree, rightTree);
            return;
        }
    }
}

#endif //BINORDTREE3_BINORDTREE_H
