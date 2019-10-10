#include "GenStack.h"
#include <iostream>

using namespace std;

GenStack::GenStack() //Default constructor
{
  //initialization of default values
  myArray = new char[128];
  size = 128;
  top = -1;
}

GenStack::GenStack(int maxSize)
{
  myArray = new char[maxSize];
  size = maxSize;
  top = -1;
}

GenStack::~GenStack()
{
  delete[] myArray;
}

void GenStack::push(char d)
{
  //need to check errors/boundary check
  //check if its full; if its full, throw an exception
  //this is your job
  int x = -1;
  try
  {
    if (isFull())
    {
      throw x;
    }
    myArray[++top] = d; //adds to myArray stack
  }
  catch (int x)
  {
    cout << "Error: Stack is full." << endl;
  }
}

char GenStack::pop()
{
  int x = -1;
  try
  {
    if (isEmpty())
    {
      throw x;
    }
    return myArray[top--];
  }
  catch (int x)
  {
    cout << "Error: Stack is empty" << endl;
  }
}

char GenStack::peek()
{
  //check if isEmpty
  return myArray[top];
}

bool GenStack::isFull()
{
  return (top == size-1);
}

bool GenStack::isEmpty()
{
  return (top == -1);
}
