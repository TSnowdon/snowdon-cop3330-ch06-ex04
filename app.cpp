/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tyler Snowdon
 */
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

class Name_value
{
public:
    string name;
    int value;
};

int main()
{
    vector<Name_value> names;

    string exit = "NoName";
    Name_value input;
    bool skip = false;
    while (true)
    {
        cout << "Please enter a Name followed by a score: ";
        cin >> input.name;
        cin >> input.value;

        for (int i = 0; i < names.size(); i++)
        {
            if (names[i].name == input.name)
            {
                cout << "Please enter a Unique Name Only...";
                cout << "\n";
                skip = true;
            }
        }
        if (skip)
        {
            skip = false;
            continue;
        }
        if (input.name == exit && input.value == 0)
        {
            cout << "exiting...\n";
            break;
        }
        else
        {
            names.push_back(input);
        }
    }

    for (auto person : names)
    {
        cout << "(" << person.name << "," << person.value << ")\n";
    }

    return 0;
}