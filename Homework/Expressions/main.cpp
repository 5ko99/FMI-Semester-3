#include <iostream>
#include "Parser.h"
#include <fstream>

int main() {
    std::string str;
    Parser p;
    std::ifstream file;
    file.open("../data.txt");
    while(getline(file,str)){
        std::cout<<p.calculate(str)<<std::endl;
    }
    file.close();
    return 0;
}