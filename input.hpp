#include "functiondictionary.hpp"

using namespace std;
using std::string;

int checkpatern(string x)
{

    for (unsigned int i=0; i < 4; i++)
    {
        string commandpattern{"(["+ dictionary[i] +"]+\\s+[0-9]*)"};

        cout << "in checkpatern function iteration number " << i << " checking if the command " << dictionary[i] << " exists" << endl << endl;
        std::regex const pattern
        {
            commandpattern
        };
        std::string target { x };
        bool result = std::regex_match(target, pattern);
        cout << "commandpatern: " << commandpattern << " result: " << result << " target: " << target << endl << endl;

        if (result)
        {

            cout << "command found, we found " << dictionary[i] << " *****************************************"<< endl << "*****************************************" <<  endl;
            return i+10;
        }
        else
        {

            cout << "not matching checking the next patern" << endl << endl;
        };

    };

    return false;

};





int manageinput(string x)
{
    cout << "here's the string we've got: " << x << "and this is: " << endl;
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


    /*

    found = x.find(',');
    cout << "found: " << found << endl;

    */



    switch ( checkpatern(x) )
    {
    case 10:
        cout << "pin";
        // pin();
        break;
    case 11:
        cout << "iteration";

        break;
    case 12:
        cout << "delaybetween";

        break;
    case 13:
        cout << "end delay";

        break;
    default:
        cout << "moai :/";
    }

    return true;
};






