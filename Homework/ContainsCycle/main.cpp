#include <iostream>
#include <vector>
struct ListNode{
    int data;
    ListNode *next;
    explicit ListNode(int _data=int(), ListNode* _next= nullptr):data(_data),next(_next){}
};

template <class T>
bool isIn(std::vector<T*> const &  arr, T* node){
    for(auto n: arr){
        if(n==node) return true;
    }
    return false;
}
bool containsCycle(ListNode* start){
    std::vector<ListNode*> visited;
    visited.push_back(start);
    while(start->next!= nullptr){
        if(isIn(visited,start->next)){
            return true;
        }
        visited.push_back(start->next);
        start=start->next;
    }
    return false;
}

int main() {
    ListNode l[4];
    for(int i=0;i<4;i++){
        l[i].data=i;
        if(i<3) l[i].next=&l[i+1];
    }
    std::cout<<containsCycle(&l[0])<<std::endl;
    l[3].next=&l[0];
    std::cout<<containsCycle(&l[0])<<std::endl;
    l[3].next=&l[2];
    std::cout<<containsCycle(&l[0])<<std::endl;
    ListNode l4;
    l[3].next=&l4;
    l4.next=&l[3];
    std::cout<<containsCycle(&l[0])<<std::endl;
    return 0;
}
