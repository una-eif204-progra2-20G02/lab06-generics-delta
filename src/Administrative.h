//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_ADMINISTRATIVE_H
#define LAB02_OOP_ADMINISTRATIVE_H

#include <iostream>
#include <sstream>
using namespace std;

class Administrative{
  double monthly_salary;
    string nom;
    string apellido;
    int id;

public:
  Administrative(double);
  Administrative(string = " ",string = " ", int = 0, double = 0);
  ~Administrative();

  string getNombre();
  void setNombre(string);

  string getApellido();
  void setApellido(string);

  int getId();
  void setId(int);

  void set_monthly_salary(double);
  double get_monthly_salary() const;

  virtual double salary() const;
  virtual string to_string() const;
};

#endif //LAB02_OOP_ADMINISTRATIVE_H