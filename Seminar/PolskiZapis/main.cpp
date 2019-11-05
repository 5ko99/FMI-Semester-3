#include <iostream>
#include<stack>
#include <cstring>
int getDigit(const char expr){
    return expr-'0';
}
int parseNumber(const char *expr,int &index){
    int result=0;
    while(isdigit(expr[index])){
        result=result*10+getDigit(expr[index]);
        index++;
    }
    return result;
}
bool isOperator(char s){
    return s=='+' || s=='-' || s=='/' || s=='*';
}
double calculateOperations(char exp,double first,double second){
    switch(exp){
        case '+':
            return first+second;
        case '-':
            return first-second;
        case '*':
            return first*second;
        case '/':
            if(second!=0) return first/second;
            else std::cerr<<"Division by 0!!! \n";
            return 0;
    }
}
double calculateInverse(const char* expr){
    std::stack<double> args;
    for(int i=0;i<strlen(expr);i++) {
        if (isdigit(expr[i])) {
            int number = parseNumber(expr, i);
            args.push(number);
        } else if (isOperator(expr[i])) {
            double second = args.top();
            args.pop();
            double first = args.top();
            args.pop();
            double result = calculateOperations(expr[i], first, second);
            args.push(result);
        }
    }
        double r=args.top();
        args.pop();
        return r;
}
int main() {
    char s[100];
    std::cin.getline(s,100);
    std::cout<<calculateInverse(s)<<std::endl;
    return 0;
}