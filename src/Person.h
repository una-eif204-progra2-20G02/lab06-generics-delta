//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PERSON_H
#define LAB02_OOP_PERSON_H


#include <sstream>
#include <ostream>
#include <iostream>
using namespace std;

/**
 * Abstract Class of Person
 */
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
#endif //LAB02_OOP_PERSON_H