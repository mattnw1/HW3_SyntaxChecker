/*Michael Kulinich
2328386
kulinich@chapman.edu
Matthew Nwerem
2277158
nwere100@mail.chapman.edu


FileHelper.h
This is a header file for FileHelper Class that
reads from the user input file of the initial generation
and creates the 2d arrays that will be used in simulation
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

    bool ParenMatch(GenStack<T> stack, int stack.getSize());

    ifstream inFile;
    string inputFile;


};
