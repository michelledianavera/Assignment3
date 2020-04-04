#include <iostream>

template <class T>
class GenStack{
public:
  GenStack(); //default constructor
  GenStack(int maxSize);
  ~GenStack(); //default destructor

//core functions
  void push(T data);
  T pop();


//aux functions
  T peek();
  bool isFull();
  bool isEmpty();

//vars
  int size;
  int top;
  T *myArray;


};
//default constuctor
template <class T>
GenStack<T>::GenStack(){
  top = -1;
  myArray = new T[150];
  size = 150;


}
//overloaded constructor
template <class T>
GenStack<T>::GenStack(int maxSize){
  myArray = new T[maxSize];
  top = -1;
  size = maxSize;
}

template <class T>
GenStack<T>::~GenStack(){
  //destructor
  delete myArray;

}
//main functions
template <class T>
void GenStack<T>::push(T data){
  myArray[++top] = data;


}
template <class T>
T GenStack<T>::pop(){
    return myArray[top--];
  }


template <class T>
T GenStack<T>::peek(){
  return myArray[top];

}
template <class T>
bool GenStack<T>::isEmpty(){
  return (top==-1);

}
template <class T>
bool GenStack<T>::isFull(){
  return (size-1 == top);
}
