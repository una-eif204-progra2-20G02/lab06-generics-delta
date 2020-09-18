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
   int size();
   T returnElement(int);
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

template<typename T>
int GenericVector<T>::size (){
    return Gvector.size();
}

template<typename T>
T GenericVector<T>::returnElement(int position){
    assert(position<=Gvector.size());
    return Gvector[position];
}
