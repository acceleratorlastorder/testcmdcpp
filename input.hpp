#include "functiondictionary.hpp"

using namespace std;
using std::string;

int checkpatern(string x)
{

    for (unsigned int i=0; i < 4; i++)
    {
        string commandpattern{"(["+ dictionary[i] +"]+\s+[0-9]*)"};

        cout << "in checkpatern function iteration number " << i << " checking if the command " << dictionary[i] << " exists " << endl;
        std::regex const pattern
        {
            commandpattern
        };
        std::string target { x };
        bool result = std::regex_match(target, pattern);
    cout << "commandpatern: " << commandpattern << "result: " << result << "target :" << target << "pattern: " <<endl;

       if (result)
        {

            cout << "command found, we found " << dictionary[i] << endl;
            return false;
        }
        else{

            cout << "not matching checking the next patern" << endl;
        };
    };



};





int manageinput(string x)
{
    cout << "here's the string we've got: " << x << endl;
    //char lol = x;

    for(unsigned int i = 0; i<x.size(); i++)
    {
        cout << "iteration number : " << i << endl;

        if (x[i] == ',')
        {
            cout << ", detected" << endl;
        };
        if (x[i]=='\0')
        {
            cout << "end of the line lol " << endl;
        }
    };





    if(!checkpatern(x))
    {
        cout << "merci d'entrer une commande valide" << endl;
        return false;
    }
    else
        cout << "lel" << endl;
    return true;

};






