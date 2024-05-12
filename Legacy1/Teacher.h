#pragma once
#include "AcademyMan.h"
class Teacher :
    public AcademyMan
{
    char * subject;
    int grade;
public:
    Teacher(int _age, const char* _name
        , const char* _phoneNumber, const char* _subject
        , int _grade, bool _status = true);
    void print();
    void setMarks();
    ~Teacher();
};

