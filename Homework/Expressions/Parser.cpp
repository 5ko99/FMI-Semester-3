//
// Created by petko on 13/11/2019.
//
#include "Parser.h"
int Parser::calculate(const std::string& str){
    std::stack<IFunction*> stack;
    std::stack<int> stackInt;
    f* f1= new f;
    g* g1= new g;
    m* m1 = new m;
    for(int i=0;i<str.length();i++){
        if(str[i]=='f') {
            stack.push(f1);
        }
        if(str[i]=='g') {
            stack.push(g1);
        }
        if(str[i]=='m') {
            stack.push(m1);
        }
        if(str[i]>='0'&& str[i]<='9'){
            std::string n;
            while(str[i]>='0'&& str[i]<='9' && i<str.length()){
                n+=str[i];
                i++;
            }
            stackInt.push(stoi(n));
        }
        if(str[i]==')'){
            if(stack.top()==m1){
                int x=stackInt.top();
                stackInt.pop();
                int y=stackInt.top();
                stackInt.pop();
                stackInt.push(stack.top()->Execute(x,y));
                stack.pop();
            }else{
                int x=stackInt.top();
                stackInt.pop();
                stackInt.push(stack.top()->Execute(x));
                stack.pop();
            }
        }
    }
    return stackInt.top();
}