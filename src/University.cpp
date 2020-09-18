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

std::vector<Professor> University::get_Professor_List(){
  return std::vector<Professor>(professor_List);
}

std::vector<Administrative> University::get_Administrative_List(){
  return std::vector<Administrative>(administrative_List);
}

void University::Add_Professor(Professor prof){
  professor_List.push_back(prof);
}

void University::Add_Administrative(Administrative admin) {
  administrative_List.push_back(admin);
}

string University::toString(){
  stringstream s;

  for(Professor element : professor_List){
    s<<element.to_string()<<std::endl;
  }

  s<<"\n\n";

  for(Administrative element : administrative_List){
    s<<element.to_string()<<std::endl;
  }

  return s.str();
}