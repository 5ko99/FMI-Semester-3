#include <iostream>
#include <forward_list>
#include <list>
#include <fstream>
#include <string>
struct Student{
    std::string name;
    unsigned int fn;
    Student(std::string const & _name="", unsigned int _fn=0):name(_name),fn(_fn){}

public:
    friend std::ostream &  operator<<(std::ostream &os, const Student &s){
        os<<s.name<<s.fn;
        return os;
    }
};
using L=std::list<int>;
bool palindrome(L l){
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
int main() {
    using fl=std::forward_list<int>;
    fl f1,f2;
    f1.assign({1,2,3,4});
    f2.assign(5,10);
    f1.push_front(6);
    f1.insert_after(f1.begin(),69);
    for(int& a: f1){
        std::cout<<a<<' ';
    }
    std::cout<<'\n';
    //Want to insert after f2.end
    fl::iterator ptr = f2.begin();
    ptr++;
    f2.insert_after(ptr,8);
    for(int& a: f2){
        std::cout<<a<<' ';
    }
    std::cout<<'\n';

    //Cycle
    L l;
    l.assign({9,8,7,6,5,4,3,2,1,0});
    L::iterator it;
    for(it=l.begin();it!=l.end();++it){
        std::cout<<*it<<' ';
    }
    std::cout<<'\n';
    std::cout<<*it<<' '<<*(++(++it))<<std::endl;
    auto rit=l.rbegin();

    for(it=l.begin(),rit=l.rbegin();it!=l.end()&&rit!=l.rend();it++,rit++){
        std::cout<<*it<<' '<<*rit<<' ';
    }
    std::cout<<std::endl;
    //Palindrome
    L lp({1,2,3,4,3,2,1});
    std::cout<<palindrome(lp)<<std::endl;
    //Files
    std::list<Student> ls;
    int n;
    unsigned int fn;
    std::string name;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>name;
        std::cin>>fn;
        ls.emplace_back(name,fn);
    }
    std::ofstream outfile;
    outfile.open("test.dat",std::ios::binary|std::ios::out);
    for(Student& it: ls){
        outfile.write((char*) &it, sizeof(Student));
    }
    std::list<Student> read;
    Student s2("Dragan",6);
    outfile.seekp(2* sizeof(Student));
    outfile.write((char*)&s2,sizeof(Student));
    outfile.close();
    std::ifstream ifs;
    ifs.open("test.dat",std::ios::binary|std::ios::in);
    auto ptrRead = read.begin();
    Student temp;
    for(int i=0;i<=n;i++){
        ifs.read((char*)&temp,sizeof(Student));
        read.insert(ptrRead,temp);
        ptrRead++;
    }
    ifs.close();
    for(auto& st: read){
        std::cout<<st<<std::endl;
    }
    return 0;
}