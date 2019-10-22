#include "Stack.cpp"
long generateNumber(const char*);
bool isValid(const char*);
int main() {
    char* str;
    std::cin>>str;
    long result = generateNumber(str);
    std::cout<<result<<std::endl;
    std::cout<<isValid(str)<<std::endl;
    return 0;
}
bool isDigit(char n){
    return n >= 48 && n <= 57;
}
int getNumber(char n){
    return n-'0';
}
long generateNumber(const char* input){
    Stack<int> digits;
    for(int i=0;i<strlen(input);i++) {
        if (isDigit(input[i])) {
            digits.push(getNumber(input[i]));
        }
    }
        int result=0;
        while(!digits.isEmpty())
            result=result*10+digits.pop();
        return  result;
}
bool isValid(const char* str){
    Stack<char> brackets;
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='(') brackets.push(str[i]);
        if(str[i]==')'){
            if(brackets.isEmpty()) return false;
            else brackets.pop();
        }
    }
    return brackets.isEmpty();
}