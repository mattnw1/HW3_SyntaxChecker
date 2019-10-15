/*
Matthew Nwerem
2277158
nwere100@mail.chapman.edu

DelimMatch.h
This is a header file for DelimMatch Class that
reads in the user input file and checks to see if there are
any syntax errors from the assignments criteria
*/

#include <iostream>
#include <fstream>
#include "GenStack.h"

using namespace std;

class DelimMatch
{
  public:
    //Constructor
    //string parameter that is set to inputFile
    DelimMatch(string fileName);
    ~DelimMatch();

    void checkDelim();
    char opposite(GenStack<char> stack);
    char opposite(char c);


    string inputFile;
    ifstream inFile;
    string anotherFile;
};
