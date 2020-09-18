//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_UNIVERSITY_H
#define LAB02_OOP_UNIVERSITY_H

#include "Professor.h"
#include "Administrative.h"
#include "GenericVector.h"

class University {
    string name;
    GenericVector<Professor> professor_List;
    GenericVector<Administrative> administrative_List;
    Professor professor;
    Administrative administrative;

public:
    University();

    University(string);

    University(string, Professor, Administrative);

    string get_name();

    void set_name(string);

    Professor get_Professor();

    void set_Professor(Professor);

    Administrative get_Administrative();

    void set_Administrative(Administrative);

    GenericVector<Professor> get_Professor_List();

    GenericVector<Administrative> get_Administrative_List();

    void Add_Professor(Professor);

    void Add_Administrative(Administrative);

    string toString();
};

#endif //LAB02_OOP_UNIVERSITY_H