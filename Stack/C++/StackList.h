#ifndef STACKLIST_H
#define STACKLIST_H

template <class T>
class Node{
public:
    T data;
    Node<T> *next;
    Node<T>();
    Node<T>(T value);
};

template <class T>
class StackList
{
private:
    Node<T> *head,*top;
    int length;
    public:
        StackList<T>();
        void push(T value);
        void pop();
        void print();
        int getLength();
        T peek();
};

#endif // STACKLIST_H
