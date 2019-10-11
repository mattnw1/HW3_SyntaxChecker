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
    int getSize();


  private:
    int size;
    int top;
    T *myArray;

};

    template <class T>
    GenStack<T>::GenStack() //Default constructor
    {
      //initialization of default values
      myArray = new T[10];
      size = 10;
      top = -1;
    }

    template <class T>
    GenStack<T>::GenStack(int maxSize)
    {
      myArray = new T[maxSize];
      size = maxSize;
      top = -1;
    }

    /*
    template<class T>
    GenStack<T>::GenStack(GenStack<T> &toCopy)
    {
      GenStack<T> Temp = GenStack(toCopy.size;
      copiedStack = new T[toCopy.size];

      for(int i = 0 i > toCopy.size; ++i)
        push(toCopy.pop());
    }
    */


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
        if (isFull())
        {
          T *temp = new T[size*2]; // create new array of double the size

          for (int i = 0; i < size; i++)
          {
            temp[i] = myArray[i]; //temp now has all of the contents of myArray
          }
          delete[] myArray; // to ensure that there are no memory leaks
          size *=2;  // updating size
          myArray = temp;


        }
        myArray[++top] = d; //adds to myArray stack
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
        exit(1); //leaves program
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

    template <class T>
    int GenStack<T>::getSize()
    {
      //check if isEmpty
      return size;
    }
