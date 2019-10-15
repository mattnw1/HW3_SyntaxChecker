#include "DelimMatch.h"

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
/* Testing template stacks
GenStack<float> FloatStack(1);
FloatStack.pop();
FloatStack.push(1.2);
cout << "Peeking FloatStack: " << FloatStack.peek() << endl;
cout << "Getting size of FloatStack: " << FloatStack.getSize() << endl;

FloatStack.push(2.21);
cout << "Getting size of FloatStack: " << FloatStack.getSize() << endl;

FloatStack.push(122.2);
cout << "Peeking FloatStack: " << FloatStack.peek() << endl;
cout << "Getting size of FloatStack: " << FloatStack.getSize() << endl;
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////

ifstream inFile;
string inputFile;
fstream outFile;
string line;
int lineCount = 1;

cout << "------------- This Program is a Syntax Checker -------------" << endl;
cout << "\n" << endl;
cout << "\n" << endl;
cout << "Enter the location of a source code to be analyzed" << endl;
cin >> inputFile;
cout << "Source code entered..." << endl;
cout << "Beginning Syntax Checker.." << endl;
cout << "\n" << endl;

DelimMatch matcher(inputFile);
matcher.checkDelim();
cout << "Got past matcher" << endl;







/*
  myStack.push('R');
  cout << "Push 1: " << myStack.peek() << endl;

  myStack.push('a');
  cout << "Push 2: " << myStack.peek() << endl;

  myStack.push('d');
  cout << "Push 3: " << myStack.peek() << endl;

  myStack.push('a');
  cout << "Push 4: " << myStack.peek() << endl;



  cout << "Popping: " << myStack.pop() << endl;
  cout << "Peeking: " << myStack.peek() << endl;

  myStack.push('F');
  cout << "Peeking: " << myStack.peek() << endl;

  while(!myStack.isEmpty())
  {
    cout << "Popping: " << myStack.pop() << endl;
  }
*/

  return 0;
}
