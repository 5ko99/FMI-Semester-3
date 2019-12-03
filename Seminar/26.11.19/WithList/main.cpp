#include <iostream>
#include <list>
using namespace std;
bool canReadNumber(list<int> &cl,long long n){
    auto p=cl.begin();
    long long result=0;
    while(result<n){
        result=result*10+*p;
        ++p;
        if(p==cl.end())
            p=cl.begin();
    }
    return n==result;
}
int main() {
    list<int> l;
    l.assign({1,2,3});
    cout<<canReadNumber(l,123123)<<endl;
    return 0;
}