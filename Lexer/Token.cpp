//
// Created by Marie on 2022-07-06.
//

#include "Token.h"

void Token :: setToken(string aType, string aValue)
{
    type = aType;
    value = aValue;

    if (!value.empty())
    {
        cout << type << " : " << value << endl;
    }
    cout << type << endl;
}