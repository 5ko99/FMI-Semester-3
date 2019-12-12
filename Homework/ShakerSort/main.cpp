#include <iostream>
#include <list>
#include <fstream>
#include <cassert>
template <class T>
using L = std::list<T>;

template <class T>
void sortCocktailStyle(L<T> & dl){
    bool swapped=true;
    auto itB=dl.begin();
    auto itE=dl.end();
    --itE;
    while(swapped){
        swapped=false;
        //Forward Comparison
        for(auto it=itB;it!=itE;++it){
            if(*it>*(next(it))){
                std::iter_swap(it,next(it));
                swapped= true;
            }
        }
        if(!swapped) break;
        swapped=false;
        //Last element is sorted
        --itE;
        //Backward Comparison
        for(auto it=itE;it!=prev(itB);--it){
            if(*it>*(next(it))){
                std::iter_swap(it,next(it));
                swapped=true;
            }
        }
        //First element is sorted
        ++itB;
    }
}

template <class T>
void printList(L<T> & dl){
    for(auto it=dl.begin();it!=dl.end();++it){
        std::cout<<*it<<' ';
    }
    std::cout<<'\n';
}
int main() {
    std::ifstream file("../array.txt",std::ios::in);
    assert(file);
    L<int> list;
    while(!file.eof()){
        int n;
        file>>n;
        list.push_back(n);
    }
    file.close();
    sortCocktailStyle(list);
    printList(list);
    return 0;
}
