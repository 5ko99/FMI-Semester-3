#include <iostream>
#include <string>
#include <vector>
#include "functions.h"
#include <stack>
using namespace std;
enum Command {append , del , undo, print, my_exit};
Command evaluateCmd(string const & line, vector<string> & args){
    args.clear();
    string arg;
    for(int i=0;i<line.length();i++){
        if(line[i]!=' '){
            arg+=line[i];
        }else{
            args.push_back(arg);
            arg.clear();
        }
    }
    args.push_back(arg);
   if(args[0]=="append") return append;
   if(args[0]=="delete") return del;
   if(args[0]=="undo") return undo;
   if(args[0]=="print") return print;
   if(args[0]=="exit") return my_exit;

}
void executeCommand(Command cmd,vector<string>& args, string & s, stack<string> & history){
    switch(cmd){
        case my_exit: my_exitF();
            break;
        case append: appendF(args,s,history);
            break;
        case del: deleteF(args,s,history);
            break;
        case undo: undoF(s,history);
            break;
        case print: printF(s,args);
            break;
        default: cerr<<"Wrong command entered!"<<endl;
    }
}
int main() {
    string s;
    string line;
    Command cmd;
    vector<string> args;
    stack<string> history;
    history.push(s);
    while(true){
        getline(cin,line);
        cmd=evaluateCmd(line,args);
        executeCommand(cmd,args,s,history);
        //cout<<s<<endl;
    }
    return 0

}