#ifndef BINTREE_MNODE_H
#define BINTREE_MNODE_H

#include <list>
template <class T>
struct MNode {
    T data;
    std::list<MNode<T>*> children;
};


#endif //BINTREE_MNODE_H
