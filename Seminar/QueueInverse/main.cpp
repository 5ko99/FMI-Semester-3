#include <iostream>
#include <stack>
#include <queue>
template <class T>
void reverseQueue(std::queue<T> &q){
    std::stack<T> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
}
int main() {
    std::queue<int> q;
    int n,t;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>t;
        q.push(t);
    }
    reverseQueue(q);
    for(int i=0;i<n;i++){
        std::cout<<q.front()<<' ';
        q.pop();
    }
    std::cout<<'\n';
    return 0;
}