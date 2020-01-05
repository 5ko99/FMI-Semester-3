#include <fstream>
#include <cassert>
#include "Funct.h"
const char* PATH="../data.txt";
int main() {
    std::string line;
    std::ifstream file(PATH,std::ios::in);
    assert(file);
    Node *root;
    while(getline(file,line)){
        createBinTree(&root,line);
        postfix(root);
        printf("\n");
        infix(root);
        printf("\n");
        printf("%d",calculate(root));
        printf("\n");
    }
    file.close();
    return 0;
}
