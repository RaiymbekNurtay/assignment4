//
// Created by Raiymbek Nurtay on 15.10.2021.
//

#ifndef ASSIGNMENT_4_STUDENT_H
#define ASSIGNMENT_4_STUDENT_H
#include "Acm.h"
#include <iostream>

//template <typename Activities>
class Student {
public:
    string name;
    int ID;
    int age;
    Course course[10];
    string activities;
    friend ostream &operator<<(ostream &out, const Student &other);
};



#endif //ASSIGNMENT_4_STUDENT_H
