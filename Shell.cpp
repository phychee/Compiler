//
// Created by Marie on 2022-07-04.
//
#include "Shell.h"

void Shell :: output()
{
    while (true)
    {
        cout << "python > ";
        getline(cin, text);

        cout << text << endl;
    }
}