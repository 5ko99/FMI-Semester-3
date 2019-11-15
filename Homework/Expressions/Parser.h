//
// Created by petko on 13/11/2019.
//

#ifndef EXPRESSIONS_PARSER_H
#define EXPRESSIONS_PARSER_H
#include "Parser.h"
#include <string>
#include "Functions/m.h"
#include "Functions/f.h"
#include "Functions/g.h"
#include <stack>
class Parser {
public:
    int calculate(const std::string&);
};


#endif //EXPRESSIONS_PARSER_H
