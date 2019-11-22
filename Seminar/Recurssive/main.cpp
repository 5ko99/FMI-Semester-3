#include <iostream>
#include <list>
#include <iterator>
using namespace std;
template <class T>
bool memberRec(std::list<T> l, T x){
    //x is L || x is in L\{y}
    if(l.empty())
        return false;
    T temp=l.front();
    l.remove(l.front());
    if(x==temp)
        return true;
    return memberRec(l,x);
}
bool memberRecAux(list<int>& l,list<int>::iterator it, int x){
    if(it==l.end()){
        return false;
    }
    if(*it==x){
        return true;
    }
    return memberRecAux(l,++it,x);
}
bool memberRec2(std::list<int> l, int x){
    auto it=l.begin();
    return memberRecAux(l,it,x);
}
void removeFirst(list<int> & l, int x){
    if(l.empty())
        return;
    int temp=l.front();
    l.pop_front();
    if(temp==x)
        return;
    removeFirst(l,x);
    l.push_front(temp);
}
//void removeFirstAux(list<int> & l, list<int>::iterator it, int x){
//    if(it==l.end())
//        return;
//    if(*it==x)
//        it = l.erase(it);
//}
int main() {
    int x;
    std::cin>>x;
    std::list<int> l;
    for(int i=0;i<10;i++)
        l.push_back(i);
    std::cout<<memberRec(l,x)<<std::endl;
    removeFirst(l,x);
    for(auto it: l){
        cout<<it<<endl;
    }

    return 0;
}
