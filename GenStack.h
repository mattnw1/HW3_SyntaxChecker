#include <iostream>

using namespace std;


template <class T>
class GenStack
{
  public:
    GenStack(); //constructor
    GenStack(int maxSize);//overload constructor
    ~GenStack(); //destructor

    void push(T d);
    T pop();
    T peek(); //AKA top()

    bool isFull();
    bool isEmpty();


  private:
    int size;
    int top;
    T *myArray;

};

    template <class T>
    GenStack<T>::GenStack() //Default constructor
    {
      //initialization of default values
      myArray = new T[128];
      size = 128;
      top = -1;
    }

    template <class T>
    GenStack<T>::GenStack(int maxSize)
    {
      myArray = new T[maxSize];
      size = maxSize;
      top = -1;
    }

    template <class T>
    GenStack<T>::~GenStack()
    {
      delete[] myArray;
    }

    template <typename T>
    void GenStack<T>::push(T d)
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

    template <class T>
    T GenStack<T>::pop()
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

    template <class T>
    T GenStack<T>::peek()
    {
      //check if isEmpty
      return myArray[top];
    }

    template <class T>
    bool GenStack<T>::isFull()
    {
      return (top == size-1);
    }

    template <class T>
    bool GenStack<T>::isEmpty()
    {
      return (top == -1);
    }
