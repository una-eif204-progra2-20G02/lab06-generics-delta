//
// Created by Maikol Guzman on 8/2/20.
//

#include <iomanip>
#include "Administrative.h"

Administrative::Administrative(double ms):monthly_salary(ms){}

Administrative::Administrative(string nomb,string apel,int id_,double salar)
:nom(nomb),apellido(apel),id(id_),monthly_salary(salar){}

Administrative::~Administrative(){}

string Administrative::getNombre() {
    return nom;
}
void Administrative::setNombre(string nomb) {
    nom=nomb;
}
string Administrative::getApellido() {
    return apellido;
}
void Administrative::setApellido(string apel) {
    apellido=apel;
}
int Administrative::getId() {
    return id;
}
void Administrative::setId(int id_) {
    id=id_;
}

double Administrative::get_monthly_salary() const { return monthly_salary;}

void Administrative::set_monthly_salary(double monthlySalary) {
    Administrative::monthly_salary = monthlySalary;
}

double Administrative::salary() const{return salary();}

string Administrative::to_string() const{
  stringstream x;
  x<<"Administrative Information : " <<nom<<" "<<apellido<<endl;
  x<<"Doc ID: "<<id<<endl;
  x<<"Monthly Salary: "<<get_monthly_salary()<<endl;
  return x.str();
}