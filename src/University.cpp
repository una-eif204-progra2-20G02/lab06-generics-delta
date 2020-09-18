//
// Created by Maikol Guzman on 8/2/20.
//
#include <sstream>
#include "University.h"

University::University(){ }

University::University(string name_){ name = name_; }

University::University(string name_,Professor Prof,Administrative Admin){
   name = name_;
   professor = Prof;
   administrative = Admin;   
}

string University::get_name(){return name; }
  void University::set_name(string x){ name = x;}

Professor University::get_Professor(){return professor;}
void  University::set_Professor(Professor Prof){professor = Prof;}
  
Administrative University::get_Administrative(){return administrative;}
void University::set_Administrative(Administrative Admin){ administrative=Admin;}

GenericVector<Professor> University::get_Professor_List(){
  return GenericVector<Professor>(professor_List);
}

GenericVector<Administrative> University::get_Administrative_List(){
  return GenericVector<Administrative>(administrative_List);
}

void University::Add_Professor(Professor prof){
  professor_List.push(prof);
}

void University::Add_Administrative(Administrative admin) {
  administrative_List.push(admin);
}

string University::toString(){
  stringstream s;

  for(int i=0;i<professor_List.size();i++){
      s<<professor_List.returnElement(i).to_string();
  }

  s<<"\n\n";

  for(int j=0;j<professor_List.size();j++){
    s<<administrative_List.returnElement(j).to_string();
  }

  return s.str();
}