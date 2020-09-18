//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PERSON_H
#define LAB02_OOP_PERSON_H


#include <sstream>
#include <ostream>
#include <iostream>
using namespace std;

template<typename T>
class Person {
protected:
   string nom;
   string apellido;
   int id;

  public:
    Person();
    Person(string, string, int);

    virtual ~Person();

    string get_nom();
    void set_nom(string);

    string get_appellido();
    void set_apellido(string);

    int get_ID();
    void set_ID(int);

    virtual double salary()const=0;
    virtual string to_string()const=0;
};
template<typename T>
Person<T>::Person() {}

template<typename T>
Person<T>::Person(string nom_, string apellido_, int id_){
    nom=nom_;
    apellido=apellido_;
    id=id_;
}

template<typename T>
Person<T>::~Person(){ }

template<typename T>
string Person<T>::get_nom(){return nom;}

template<typename T>
void Person<T>::set_nom(string x){nom=x;}

template<typename T>
string Person<T>::get_appellido(){return apellido;}

template<typename T>
void Person<T>::set_apellido(string x){apellido=x;}

template<typename T>
int Person<T>::get_ID(){return id;}

template<typename T>
void Person<T>::set_ID(int x){id=x;}

#endif //LAB02_OOP_PERSON_H