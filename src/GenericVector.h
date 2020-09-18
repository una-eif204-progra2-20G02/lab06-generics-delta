#ifndef LAB02_OOP_PERSON_H
#define LAB02_OOP_PERSON_H


#include <sstream>
#include <ostream>
#include <iostream>
using namespace std;
#include <vector>

template<typename T>
class GenericVector{
private:
    std::vector<T> vector;
public:
    void push(T elemento);
    void pop();
    T top() ;
    bool empty() ;
    string toString();
};