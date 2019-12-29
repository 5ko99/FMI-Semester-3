//
// Created by petko on 29.12.2019 г..
//

#ifndef POLISH_NOTATION_FUNCT_H
#define POLISH_NOTATION_FUNCT_H

#include "TNode.h"
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <sstream>
#include <stack>
using Node=TNode<std::string>;
std::vector<std::string> split(const std::string & strToSplit, char delim,std::vector<std::string> & data){
    std::string temp;
    for(char i : strToSplit){
        if(i==delim || i=='\r'){
            data.push_back(temp);
            temp.clear();
            continue;
        }
        temp.push_back(i);
    }
    return data;
}

bool isOperator(const std::string & c){
    return c == "+" || c == "-" || c == "*";
}

void createBinTreeRec(Node** p, std::vector<std::string> & a, int *currIdx){
    std::string currChar=a[*currIdx];
    *p = new Node(currChar);
    //If the character is an operator, create 2 operand nodes as children
    if (isOperator(currChar)){
        //Left
        ++(*currIdx);
        createBinTreeRec(&(*p)->left, a, currIdx);
        //Right
        ++(*currIdx);
        createBinTreeRec(&(*p)->right, a, currIdx);
    }
}

Node* createBinTree(Node** p,std::string & expr){
    std::vector<std::string> tokens;
    split(expr,' ',tokens);
    int currIdx = 0;
    createBinTreeRec(p, tokens, &currIdx);
}

void infix(Node* p){
    if (p == nullptr){
        return;
    }
    if(p->left!= nullptr&&p->right!= nullptr)
        std::cout<<"(";
    infix(p->left);
    printf("%s ", p->data.c_str());
    infix(p->right);
    if(p->left!= nullptr&&p->right!= nullptr)
        std::cout<<")";
}

void postfix(Node* p){
    if (p == nullptr) return;
    postfix(p->left);
    postfix(p->right);
    printf("%s ", p->data.c_str());
}

bool isLetter(std::string s){
    char c=s[0];
    return (c>='a'&&c<='z') || (c>='A'&&c<='Z');
}
int calculate(Node* p){
    if(p->left== nullptr&&p->right== nullptr){
        if(isLetter(p->data)){
            int n;
            printf("Enter %s= ",p->data.c_str());
            std::cin>>n;
            return n;
        }
        return stoi(p->data);
    }
        if(p->data=="+") return calculate(p->left)+calculate(p->right);
        if(p->data=="*") return calculate(p->left)*calculate(p->right);
        if(p->data=="-") return calculate(p->left)-calculate(p->right);
}


#endif //POLISH_NOTATION_FUNCT_H
