#include <iostream>
#include <string>
#include <regex>
#include <vector>
#include "functiondictionary.hpp"

using namespace std;
using std::string;

int checkpatern(string x){

    std::regex const pattern
    {
        R"([pin]+\s+[0-9]*)"
    };
    std::string target { x };
    bool result = std::regex_match(target, pattern);
    if (!result)
    {

        cout << "invalid command" << endl;
        return false;
    }
    std::cout << std::boolalpha << result << std::endl;
    return true;
}


int manageinput(string x)
{
    cout << "here's the string we've got: " << x << endl;

if(!checkpatern(x)){
    cout << "merci d'entrer une commande valide" << endl;
    return false;
}
else
    for(unsigned int i = 0; i<x.size(); i++)
    {
        cout << "iteration number : " << i << endl;

        if (x[i] == ',')
        {
            cout << ", detected" << endl;
        }

    }

    return true;
};






