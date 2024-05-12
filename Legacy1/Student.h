#pragma once
#include "AcademyMan.h"
class Student :
    public AcademyMan
{
    int year;
    char groupName[50];
public:
    Student(int _age, const char* _name, const char* _phoneNumber, int _year, const char * _group_name);
    void print();
};



