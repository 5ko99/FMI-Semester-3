#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <utility>
#include <list>
using namespace std;
string transform(string&);
int getDigit(char c){
    return c-'0';
}
bool isDigit(char n){
    return n>='0'&&n<='9';
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
bool isOperator(char s){
    return s=='+' || s=='-' || s=='/' || s=='*';
}
int parseNumber(string & expr,int & i){
    int result=0;
    while(isdigit(expr[i])){
        result=result*10+getDigit(expr[i]);
        i++;
    }
    return result;
}
double calculatePolish(string & expr){
    stack<double> operands;
    for(int i=0;i<expr.length();i++){ // NOLINT(bugprone-too-small-loop-variable)
        char ch=expr[i];
        if(isDigit(ch)){
            int number=parseNumber(expr,i);
            operands.push(number);
        } else if(isOperator(ch)){
            int second=operands.top();
            operands.pop();
            int first=operands.top();
            operands.pop();
            operands.push(calculateOperations(ch,first,second));
        }
    }
    return operands.top();
}

template <class T>
bool memberRec(std::list<T> l, T x){
    //x is L || x is in L\{y}
    if(l.empty())
        return false;
    T temp=l.front();
    l.remove(temp);
    if(x==temp)
        return true;
    return memberRec(l,x);
}
void removeFirst(list<int> & l, int x){
    if(l.empty())
        return;
    int temp=l.front();
    l.pop_front();
    if(temp==x)
        return;
    removeFirst(l,x);
    l.push_front(temp);
}
void removeAll(list<int> & l, int x){
    if(l.empty())
        return;
    int temp=l.front();
    l.pop_front();
    if(temp==x){
        removeAll(l,x);
        return;
    }
    removeAll(l,x);
    l.push_front(temp);
}
int main() {
    string expr;
    getline(cin,expr);
    cout<<calculatePolish(expr)<<endl;
    getline(cin,expr);
    cout<<transform(expr)<<endl;
    list<int> l;
    l.assign({9,0,1,8,2,3,4,5,6,7,9,8,9,9,9});
    cout<<memberRec(l,5)<<endl;
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();++it){
        if(*it==4) break;
    }
    l.erase(it);
    removeFirst(l,8);
    removeAll(l,9);
    list<int> lis = { 10, 20, 30, 40, 50 };

    cout << "The list in reverse order: ";

    for (auto it = lis.rbegin(); it != lis.rend(); ++it)
        cout << *it << " ";

    return 0;
}


// задаване на тежест на операциите
int getWeight(char op)
{
    switch (op)
    {
        case '+': return 2;
        case '-': return 2;
        case '*': return 1;
        case '/': return 1;
        default:
            return -1;
    }
}

string transform(string& expression)
{
    //пример със string, за char result[100] ще работи по същия начин, но със следене на индексите и добавяне на '\0' накрая
    string result;
    stack<char> ops;

    for (char c : expression)
    {
        if (isDigit(c) || (c >= 'a' && c <= 'z')) // символите отиват направо в резултата
            result += c;
        else if (c == '(') // отварящата скоба се вкарва в стека, за да отделя операциите, които са вътре в скобите
            ops.push(c);
        else if (c == ')') // при затваряща скоба всички операции до съответната отваряща скоба се добавят в резултата
        {
            while (ops.top() != '('){
                result += ops.top();
                ops.pop();
            }
            ops.pop();
        }
        else if (isOperator(c))
        {
            //дадена операция избутва всички операции с по-малка тежест от стека и в резултата
            //така се гарантира, че операции с по-малка тежест (които са с по-висок приоритет в нормалния инфиксен запис)
            // или същата тежест (които са със същия приоритет, но са били сложени по-рано)
            // се прилагат върху най-скоро добавените символи в резултатния низ.
            while (!ops.empty() && ops.top() != '(' && getWeight(c) >= getWeight(ops.top())){
                result += ops.top();
                ops.pop();
            }
            ops.push(c);
        }
    }

    while (!ops.empty()){
        result += ops.top();
        ops.pop();
    }
    return result;
}