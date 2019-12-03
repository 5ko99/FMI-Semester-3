#include <cstdlib>
#include <string>
#include <vector>
#include <stack>
//
// Created by petko on 27/11/2019.
//
void my_exitF(){
    exit(0);
}
void removeBlankSpaces(std::string & s){
    std::string temp;
    for(char i : s){
        if(i!=' ')
            temp+=i;
    }
    s=temp;
}
void deleteF(std::vector<std::string> & args, std::string & s, std::stack<std::string> & history){
    history.push(s);
    int n=std::stoi(args[1]);
    int pos=std::stoi(args[2]);
    int startPos=0;
    if(pos>=0){
        startPos=pos;
    }else{
        pos=(pos*-1)%(s.size()+1);
        pos*=-1;
        startPos=s.size()+pos;
    }
    for(int i=0;i<n;i++){
        //Cyclic
        if(startPos==s.size())
            startPos=0;
        s[startPos]=' ';
        startPos++;
    }
    //removeBlankSpaces(s);
}
void appendF(std::vector<std::string> & args,std::string & s, std::stack<std::string> & history){
    history.push(s);
    for(int i=1;i<args.size();i++){
        s+=args[i];
    }
}
void undoF(std::string & s,std::stack<std::string> & history){
    if(!s.empty()){
        s=history.top();
        history.pop();
    }
}
void printF(std::string & s,std::vector<std::string> & args){
    int start = std::stoi(args[1]);
    int end = std::stoi(args[2]);
    if(start<0 || start>s.length()-1 || end<0 || end>s.length()-1){
        std::cerr<<"Index out of string size! \n";
        return;
    }
    for(int i=start;i<=end;i++){
        if(s[i]!=' ')
            std::cout<<s[i];
    }
    std::cout<<std::endl;
}
