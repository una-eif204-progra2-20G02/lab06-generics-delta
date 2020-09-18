//
// Created by Maikol Guzman on 8/2/20.
//
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Professor.h"

/*Professor::Professor(double salary,double commission){
  monthly_salary=salary;
  commission_rate=commission;
}*/

Professor::Professor(string nom_, string appellido_, int id_,double salary,double commission)
:nom(nom_),apellido(apellido),id(id_),monthly_salary(salary),commission_rate(commission){}

Professor::~Professor(){ }

void Professor::set_monthly_salary(double month){
    monthly_salary=month;
}

string Professor::getNombre() {
    return nom;
}

void Professor::setNombre(string nom_) {
    nom=nom_;
}

string Professor::getApellido() {
    return apellido;
}

void Professor::setApellido(string apellido_) {
    apellido=apellido_;
}

int Professor::getId() {
    return id;
}

void Professor::setId(int id_) {
    id=id_;
}

double Professor::get_monthly_salary()const{
    return monthly_salary;
}

double Professor::get_commission_rate(){
  return commission_rate;
}
void Professor::set_commission_rate(double com){
  commission_rate=com;
}

double Professor::salary()const{
  return (monthly_salary * 0.05);
}

string Professor::to_string()const{
        stringstream s;
        s<<"Professor Information : " <<nom<<" "<<apellido<<endl;
        s<<"Doc ID: "<<id<<endl;
        s<<"Monthly Salary: "<<get_monthly_salary()<<endl;
  return s.str();
}