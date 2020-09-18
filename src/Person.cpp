//
// Created by Maikol Guzman on 8/2/20.
//
#include "Person.h"
Person::Person() {}
Person::Person(string nom_, string apellido_, int id_){
    nom=nom_;
    apellido=apellido_;
    id=id_;
}

Person::~Person(){ }

string Person::get_nom(){return nom;}
void Person::set_nom(string x){nom=x;}

string Person::get_appellido(){return apellido;}
void Person::set_apellido(string x){apellido=x;}
 
int Person::get_ID(){return id;}
void Person::set_ID(int x){id=x;}