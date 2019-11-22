#include <iostream>
#include <list>
#include <string>
using namespace std;
bool palindrome(list<char> & l){
    auto bit=l.end();
    bit--;
    auto fit=l.begin();
    while(bit != fit && next(bit) != fit){
        if(*bit != *fit){
            return false;
        }
        bit--;
        fit++;
    }
    return true;
}
void searchedSum(list<int>  & l, int sum){
    auto bit=l.end();
    bit--;
    auto fit=l.begin();
    while(fit!=bit && next(bit)!=fit) {
        if ((*fit) + (*bit) == sum) {
            cout << *fit << '+' << *bit << endl;
            fit++;bit--;
        } else if (*fit + *bit < sum) {
            fit++;
        } else {
            bit--;
        }
    }
}
int main() {
    list<char> l;
    char c;
    string str;
    cin>>str;
    for(char i : str){
        c=i;
        l.push_back(c);
    }
    cout<<palindrome(l)<<endl;
    list<int> l2;
    l2.assign({0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,100});
    searchedSum(l2,10);
    auto ptr=l.end();
    return 0;
}