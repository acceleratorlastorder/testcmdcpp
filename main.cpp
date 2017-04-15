#include "input.hpp"

string test;

int main( int argc, char* argv[] )

{


    while (1)
    {

        cout << "enter a value " << endl;
        getline (cin, test);
        cout << "the value entered is: " << test << " and the memory adress of the string is " << &test << endl;


        manageinput(test);
    };

};
