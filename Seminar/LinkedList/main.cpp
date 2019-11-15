#include <iostream>
#include "LL/LinkedList.h"
int main() {
    int x;
    LinkedList<int> l;
    l.insertEnd(2); // 2
    l.insertEnd(4); // 2 4
    l.insertBegin(1); // 1 2 4
    LinkedListIterator<int> it =l.begin();
    ++it;
    l.insertAfter(3,it);
    for(LinkedListIterator<int> it=l.begin();it;it++){
        if(*it==3){
            l.deleteBefore(x,it);
        }
    }
    return 0;
}