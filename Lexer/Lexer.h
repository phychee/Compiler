//
// Created by Marie on 2022-07-04.
//
#include <iostream>
#include <vector>
#include <string>
#include "Token.h"
using std::string;

#ifndef COMPILER_LEXER_H
#define COMPILER_LEXER_H


class Lexer : public Token{
public:

    // Lexer values for constructor
    string text;
    int pos;
    char curr_char;

    // Lexer values for make_tokens
    std::vector<string> tokens;

    // Lexer values for make_number
    string num_str;
    int dot_count;

    // Declaring lexer functions
    void setLexer(string aText);
    void advance();
    void make_tokens();
    void make_number();

};

#endif //COMPILER_LEXER_H
