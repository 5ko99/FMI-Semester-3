#include <iostream>
#include<list>
#include <iterator>
using namespace std;
void insertToSortedList(list<int> & l,int x){
    for(auto it=l.begin();it!=l.end();++it){
        if(x<=*it) {
            l.insert(it, x);
            return;
        }
    }
    l.insert(l.end(),x);
}
void deleteDuplicatedElements(list<int> & l){
    auto currIt=l.begin(),prevIt=currIt++;
    while(currIt  != l.end()){
        if(*prevIt==*currIt){
            currIt = l.erase(currIt);
        }else{
            ++prevIt;
            ++currIt;
        }
    }
}
list<int> intersectLists(list<int> & l1, list<int> & l2){
    list<int> result;
    int temp;
    for(int & it1:l1){
        temp=it1;
        for(int & it2:l2){
            if(temp==it2){
                result.push_back(temp);
                break;
            }
        }
    }
    return result;
}
list<int> unionLists(list<int> & l1, list<int> & l2){
    list<int> result;
    bool flag=true;
    for(int & it1:l1) {
        result.push_back(it1);
    }
    for(int & it2:l2){
        for(int & it:result){
            if(it2==it){
                flag=false;
            }
        }
        if(flag){
            result.push_back(it2);
        }
        flag= true;
    }
    return result;
}
list<int> ListDifference(list<int> & l1, list<int> & l2){
    list<int> result;
    bool flag = true;
    for(int & it1:l1){
        for(int & it2: l2){
            if(it2==it1) flag = false;
        }
        if(flag) result.push_back(it1);
        flag= true;
    }
    return result;
}
int main() {
    list<int> l;
    l.insert(l.end(),1);
    l.insert(l.end(),4);
    l.insert(l.end(),8);
    l.insert(l.end(),9);
    insertToSortedList(l,5);
    l.insert(l.end(),9);
    l.insert(l.end(),9);
    cout<<"Sorted list with three 9 at the end:"<<endl;
    for(int & it : l){
        cout<<it<<endl;
    }
    cout<<"Deleted duplicated items:"<<endl;
    deleteDuplicatedElements(l);
    for(int & it : l){
        cout<<it<<endl;
    }
    list<int> l2;
    l2.push_back(4);
    l2.push_back(8);
    l2.push_back(5);
    l2.push_back(41);
    l2.push_back(99);
    list<int> r;
    r=intersectLists(l,l2);
    cout<<"Intersect of Lists"<<endl;
    for(int & it : r){
        cout<<it<<endl;
    }
    r=unionLists(l,l2);
    cout<<"Union of lists"<<endl;
    for(int & it : r){
        cout<<it<<endl;
    }
    cout<<"List difference L1-L2"<<endl;
    r = ListDifference(l,l2);
    for(int & it : r){
        cout<<it<<endl;
    }
    cout<<"List difference L2-L1"<<endl;
    r = ListDifference(l2,l);
    for(int & it : r){
        cout<<it<<endl;
    }
    cout<<"End for now"<<endl;
    return 0;
}