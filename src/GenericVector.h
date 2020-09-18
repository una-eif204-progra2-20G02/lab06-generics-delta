#include <iostream>
#include<string>
#include <vector>
#include<cassert>
using namespace std;

template<typename T>
class GenericVector{
private:
    std::vector<T> Gvector;
public:
    void push(T elemento);
    void pop();
    T last() ;
    bool empty() ;
   T first();
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
T GenericVector<T>::last() {
    assert(!Gvector.empty());
    return Gvector.back();
}

template<typename T>
bool GenericVector<T>::empty()  {
    return Gvector.empty();
}

template<typename T>
T GenericVector<T>::first() {
    assert(!Gvector.empty());
    Gvector.front();
}

