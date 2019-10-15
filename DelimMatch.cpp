/*
Matthew Nwerem
2277158
nwere100@mail.chapman.edu


DelimMatch.cpp
This is cpp file for DelimMatch class
*/

#include <iostream>
#include <fstream>
#include "DelimMatch.h"


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
  anotherFile = "first";

    while(true)
    {
      // Used when a user asks to analyze another file. User will be asked
      // about another file at the end of the first analysis
       if (anotherFile == "y")
      {
        cout << "\n" << endl;
        cout << "Enter the location of a source code to be analyzed" << endl;
        cout << "If you do not want to and would like to exit, enter 'exit'" << endl;
        cin >> inputFile;

        if(inputFile == "exit")
        {
          exit(1);
        }
        inFile.open(inputFile);
      }
      inFile.open(inputFile);

    // File is not found or misspelled
    if(!inFile)
    {
      cout << "Unable to open file: " << inputFile << endl;
      cout << "Exiting..." << endl;
      exit(1);
    }

    while (getline(inFile, line))
    {
      for (int i = 0; i < line.size(); ++i)
      {

        // Looking for opening delimiter in file
        if(line[i] == '(')
        {
          matchStack.push('(');
        }

        else if(line[i] == '{')
        {
          matchStack.push('{');
        }

        else if(line[i] == '[')
        {
          matchStack.push('[');
        }

        // At this point, either one opening delimiter is on stack or stack is empty
        // Check for closing delimiters
        // This algorithm is done for each delimiter
        if (line[i] == ')')
        {
          if(matchStack.isEmpty())
          {
            cout << "Line " << lineCount << " ERROR, " << line[i] << " nothing to match with" << endl;
            inFile.close();
            exit(1);
          }

          if(matchStack.peek() != '(')
          {
            cout << "Line " << lineCount << " ERROR, wrong type, should've been " << opposite(line[i]) << endl;
            inFile.close();
            exit(1);
          }
          // If pop happens then that means that we are good to go, comparison worked
          // and the program should now look for more delemiters to check
          matchStack.pop();

        }

        else if (line[i] == '}')
        {
          if(matchStack.isEmpty())
          {
            cout << "Line " << lineCount << " ERROR, " << line[i] << " nothing to match with" << endl;
            inFile.close();
            exit(1);
          }

          if(matchStack.peek() != '}')
          {
            cout << "Line " << lineCount << " ERROR, wrong type, should've been " << opposite(line[i]) << endl;
            inFile.close();
            exit(1);
          }
          matchStack.pop(); //that means that we are good to go, comparison worked
        }

        else if (line[i] == ']')
        {
          if(matchStack.isEmpty())
          {
            cout << "Line " << lineCount << " ERROR, " << line[i] << " has nothing to match with" << endl;
            inFile.close();
            exit(1);
          }

          if(matchStack.peek() != ']')
          {
            cout << "Line " << lineCount << " ERROR, wrong type, should've been " << opposite(line[i]) << endl;
            inFile.close();
            exit(1);
          }
          matchStack.pop(); //that means that we are good to go, comparison worked
        }
      }
      ++lineCount;
    }

    // When the stack is completely empty after checking the file, then every
    // delemiter had an opening and closing grouping symobls
    if (matchStack.isEmpty())
    {
      //Means that the comparison worked/matched
      cout << "There are no problems with the syntax." << endl;
      cout << "\n" << endl;
      cout << "\n" << endl;
      cout << "Read another file? (y/n)" << endl;
      cin >> anotherFile;

      if(anotherFile != "y")
      {
        inFile.close();
        exit(1);
      }
    }

    else
    {
      // Some symbols were not matched
      // (the stack is not empty, contains an extra delimiter or
      // one side of a delemiter that is necessary)
      cout << "There is a problem with syntax." << endl;
      inFile.close();
      cout << "Extra " << matchStack.pop() << ".\n See line " << lineCount << endl;
      exit(1);
    }

    inFile.close();
  }
}

// Returns the character that is opposite of whatever character is inputed
// Limited to only the grouping symbols necessary for the assignment
char DelimMatch::opposite(GenStack<char> stack)
{
  while (stack.getTop() != 0)
  {
    cout << "popping" << endl;
    stack.pop();
  }
  switch(stack.peek())
  {
    case '(':
      return ')';

    case '{':
      return '}';

    case '[':
      return ']';

    default:
      return '\0';
  }
}

// Returns the character that is opposite of whatever character is inputed
// Limited to only the grouping symbols necessary for the assignment
char DelimMatch::opposite(char c)
{
  switch(c)
  {
    case '(':
      return ')';

    case '{':
      return '}';

    case '[':
      return ']';

    case ')':
      return '(';

    case '}':
      return '{';

    case ']':
      return '[';

    default:
      return '\0';
  }
}

DelimMatch::~DelimMatch()
{

}
