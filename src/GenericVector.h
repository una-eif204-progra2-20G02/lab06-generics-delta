#ifndef LAB02_OOP_PERSON_H
#define LAB02_OOP_PERSON_H

#include <iostream>
#include<string>
#include <vector>
#include<cassert>

template<typename T>
class GenericVector{
private:
    std::vector<T> Gvector;
public:
    void push(T elemento);
    void pop();
    T top() ;
    bool empty() ;
    string toString();
};

template<typename T>
void GenericVector<T>::push (T elemento){
    Gvector.push_back(elemento);
}

template<typename T>
void GenericVector<T>::pop() {
    assert(!Gvector.empty());
    Gvector.pop_back();
}

template<typename T>
T GenericVector<T>::top() {
    assert(!Gvector.empty());
    return Gvector.back();
}

template<typename T>
bool GenericVector<T>::empty()  {
    return Gvector.empty();
}