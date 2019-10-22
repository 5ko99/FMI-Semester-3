#include <iostream>
#include <stack>
#include <cstring>
int p(int);
int s(int);
int calculate(const char*);
int main() {
    char str[100];
    std::cin>>str;
    std::cout<<calculate(str)<<std::endl;
    return 0;
}
int s(int x){
    return (x+1)%10;
}
int p(int x){
    if(x==0) return 9;
    return x-1;
}
int calculate(const char* str){
    std::stack<bool> stack;
    int x;
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='s') stack.push(0);
        if(str[i]=='p') stack.push(1);
        if(str[i]>='0'&&str[i]<='9') x=(str[i]-'0');
    }
    while(!stack.empty()){
        if(!stack.top()){
            x=s(x);
        }else{
            x=p(x);
        }
        stack.pop();
    }
    return x;
}