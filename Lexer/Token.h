//
// Created by Marie on 2022-07-06.
//
#include <iostream>
using std::string;
using std::cout;
using std::endl;

#ifndef COMPILER_TOKEN_H
#define COMPILER_TOKEN_H


class Token {
public:
    string LEX_DT_INT = "INT";
    string LEX_DT_FLOAT = "FLOAT";
    string LEX_PLUS = "PLUS";
    string LEX_MINUS = "MINUS";
    string LEX_MUL = "MUL";
    string LEX_DIV = "DIV";
    string LEX_MOD = "MOD";
    string LEX_EXP = "EXP";
    string LEX_FLOOR = "FLOOR";
    string LEX_LEFT_PAREN = "LEFT_PAREN";
    string LEX_RIGHT_PAREN = "RIGHT_PAREN";


    string type;
    string value;

    void setToken(string aType, string aValue = "");

};
#endif //COMPILER_TOKEN_H
