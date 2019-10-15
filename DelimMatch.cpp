/*
Matthew Nwerem
2277158
nwere100@mail.chapman.edu


DelimMatch.cpp
This is cpp file for DelimMatch class
*/

#include "DelimMatch.h"
#include "GenStack.h"
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

DelimMatch::DelimMatch(string fileName)
{
  inputFile = fileName;
}

void DelimMatch::checkDelim()
{
  GenStack<char> matchStack(10);
  string line; //used to read line by line from file
  int lineCount = 1; //find what line is being read in the file
  inFile.open(inputFile);

  if(!inFile)
  {
    cout << "Unable to open file: " << inputFile << endl;
    exit(1);
  }

  while (getline(inFile, line))
  {
    for (int i = 0; i < line.size(); ++i)
    {
      if(line[i] == '(')

      {
        matchStack.push('(');
        cout << "Got a '(' be pround nigga" <<endl;
      }
      else if (line[i] == ')')
      {
        if(matchStack.isEmpty())
        {
          inFile.close();
        }
        if(matchStack.peek() != '(')
        {
          inFile.close();  //not the correct type
        }
        matchStack.pop(); //that means that we are good to go, comparison worked
      }

      if (matchStack.isEmpty())
      {
        //means that the comparison worked/matched
      }

      else
      {
        inFile.close();
      }
    }

    ++lineCount;
  }

  inFile.close();
}



DelimMatch::~DelimMatch()
{

}
