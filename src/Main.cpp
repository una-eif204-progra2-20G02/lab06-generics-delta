//
// Created by Maikol Guzman on 8/2/20.
//

//#include <iostream>
#include "University.h"

int main() {
    Professor prof1("Mike","Guzman",1234567890,1575000.00,0.05);
    Professor prof2("Pedro","Sanchez",1286608618,1050000.00,0.05);
    Administrative admin1("Marta","Rojas",272923934,800000.00);
    Administrative admin2("Andrea","Jaramillo",272923934,500000.00);
    University uni1;
    uni1.Add_Professor(prof1);
    uni1.Add_Professor(prof2);
    uni1.get_Professor_List();
    uni1.Add_Administrative(admin1);
    uni1.Add_Administrative(admin2);
    uni1.get_Administrative_List();
    std::cout<<uni1.toString();
}