#include <iostream>
#include "StackList.h"

using namespace std;

template <class T>
Node<T>::Node(){

}

template <class T>
Node<T>::Node(T value){
    this->data = value;
    this->next = NULL;
}

template <class T>
StackList<T>::StackList()
{
    this->head = NULL;
    this->top = NULL;
    this->length = 0;
}

template <class T>
void StackList<T>::push(T value){
    Node<T> *newNode = new Node<T>(value);
    if(head == NULL){
        head = newNode;
        top = newNode;
    }
    else{
        top->next = newNode;
        top = newNode;
    }
    length++;
}

template <class T>
void StackList<T>::pop(){
    Node<T> *current = head;
    while(current->next != NULL){
        current = current->next;
    }
    top = NULL;
    current->next = NULL;
    top = current;
    length--;
}

template <class T>
void StackList<T>::print(){
    Node<T> *current = head;
    while(current != NULL){
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

template <class T>
T StackList<T>::peek(){
    return top->data;
}

template <class T>
int StackList<T>::getLength(){
    return length;
}
