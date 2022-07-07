//
// Created by Marie on 2022-07-04.
//
#include "Lexer.h"

void Lexer :: setLexer(string aText)
{
    text = aText;
    pos = -1;
    curr_char = NULL;

}

void Lexer :: advance()
{
    pos++;
    if (pos < text.length())
    {
        curr_char = text[pos];
    }
    curr_char = NULL;

}
 void Lexer :: make_tokens()
{

    while (curr_char != NULL)
    {
        if (!isspace(curr_char))
        {
            //TODO: Solve this advance() function problem
            text.advance();
        }
        //TODO: Change return type of setToken()
        else if (curr_char == '+')
        {
            tokens.push_back(setToken(LEX_DT_INT));
        }
        else if (curr_char == '-')
        {
            tokens.push_back(LEX_MINUS);
        }
        else if (curr_char == '*')
        {
            tokens.push_back(LEX_MUL);
        }
        else if (curr_char == '/')
        {
            tokens.push_back(LEX_DIV);
        }
        else if (curr_char == '%')
        {
            tokens.push_back(LEX_MOD);
        }
        else if (curr_char == '**')
        {
            tokens.push_back(LEX_EXP);
        }
        else if (curr_char == '//')
        {
            tokens.push_back(LEX_FLOOR);
        }
        else if (curr_char == '(')
        {
            tokens.push_back(LEX_LEFT_PAREN);
        }
        else if (curr_char == ')')
        {
            tokens.push_back(LEX_RIGHT_PAREN);
        }
        //TODO: Include error
        else
        {

        }

    }

}