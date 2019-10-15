/*
Matthew Nwerem
2277158
nwere100@mail.chapman.edu



*/

#include <iostream>
#include <fstream>

using namespace std;

class DelimMatch
{
  public:

    //Constructor
    //string parameter that is set to inputFile
    DelimMatch(string fileName);
    ~DelimMatch();

    void checkDelim();

    string inputFile;
    ifstream inFile;
};
