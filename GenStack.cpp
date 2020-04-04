#include <iostream>
#include "GenStack.h"

template <class T>
GenStack<T>::GenStack(){
  top = -1;
  size = 0;


}
template <class T>
GenStack<T>::GenStack(int maxSize){
  myArray = new T[maxSize];
  top = -1;
  size = maxSize;
}
template <class T>
GenStack<T>::~GenStack(){
  //destructor
  delete myArray[];

}
template <class T>
void GenStack<T>::push(T data){
  myArray[++top] = data;


}
template <class T>
T GenStack<T>::pop(){
  if(myArray.isEmpty()==true){
    return std::cout <<"The stack is empty. Nothing can be popped";

  }
  else(){
    return myArray[top--];

  }

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
