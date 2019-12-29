#include <cstdlib>
#include <string>
#include <vector>
using namespace std;
template <typename T>
struct TNode
{
    T data;
    TNode<T> *left, *right;
    TNode<T>(T _data=T(), TNode<T> *_left = nullptr, TNode<T> *_right = nullptr) : data(_data), left(_left), right(_right) {}
};
using node=TNode<string>;
bool isOperator(const std::string & c){
    return c == "+" || c == "-" || c == "*";
}
void add2Util(node** p, vector<string> & a, int *currIdx){
    string currChar=a[*currIdx];
    *p = new node(currChar);
    //If the character is an operator, create 2 operand nodes as children
    if (isOperator(currChar)){
        /* Build the left sub-tree */
        ++(*currIdx);
        add2Util(&(*p)->left, a, currIdx);
        /* Build the right sub-tree */
        ++(*currIdx);
        add2Util(&(*p)->right, a, currIdx);
    }
}

void add2(node** p, vector<string> a)
{
    int currIdx = 0;
    add2Util(p, a, &currIdx);
}

int main()
{
    node* s = nullptr;
    vector<string> a ={"*","-","51","24","3"};
    vector<string> b={"-","51","*","24","3"};
    add2(&s, a);
    add2(&s,b);
    return 0;
}
