#include <iostream>
#include "StackArray.h"

using namespace std;

template <class T>
StackArray<T>::StackArray()
{
    this->top = -1;
    this->size = 5;
    T *arr = new T[size];
}

template <class T>
StackArray<T>::StackArray(int size)
{
    this->top = -1;
    this->size = size;
    T *arr = new T[size];
}

template <class T>
void StackArray<T>::push(T value){
    if(top >= size - 1){
        cout << "Stack Overflow." << endl;
        return;
    }
    arr[++top] = value;
}

template <class T>
void StackArray<T>::pop(){
    if(top <= -1){
        cout << "Stack Underflow." << endl;
        return;
    }
    top--;
}

template <class T>
int StackArray<T>::getLength(){
    return top + 1;
}

template <class T>
int StackArray<T>::getSize(){
    return size;
}

template <class T>
void StackArray<T>::print(){
    if(size <= 0 || top <= -1){
        cout << "Stack is empty" << endl;
        return;
    }
    for(int i=0; i<=top; i++)
        cout << arr[i] << " ";
    cout << endl;
}
