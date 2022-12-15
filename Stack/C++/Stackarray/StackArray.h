#ifndef STACKARRAY_H
#define STACKARRAY_H

template <class T>
class StackArray
{
private:
    T *arr;
    int top,size;
public:
        StackArray<T>();
        StackArray<T>(int size);
        void push(T value);
        void pop();
        int getLength();
        int getSize();
        void print();
};

#endif // STACKARRAY_H
