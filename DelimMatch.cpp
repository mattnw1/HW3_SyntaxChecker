/*Michael Kulinich
2328386
kulinich@chapman.edu
Matthew Nwerem
2277158
nwere100@mail.chapman.edu


DelimMatch.cpp
This is cpp file for DelimMatch class
*/

#include "DelimMatch.h"


using namespace std;

DelimMatch::DelimMatch(string fileName)
{
  inputFile = fileName;
}

bool DelimMatch::ParenMatch()
{
  GenStack<T> matchStack;
  string line; //used to read line by line from file
  int lineCount = 0; //find what line is being read in the file
  inFile.open(inputFile);

  if(!inFile)
  {
    cout << "Unable to open file: " << inputFile << endl;
    exit(1);
  }

  while (inFile >> line)
  {
    for (int i = 0; i < line.size(); ++i)
    {
      if(i == '(')
      {
        matchStack.push('(')
      }
    }

  }


    }
inFile.close();

}



FileHelper::~FileHelper()
{

}
