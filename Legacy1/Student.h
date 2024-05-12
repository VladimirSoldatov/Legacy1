#pragma once
#include "AcademyMan.h"
class Student :
    public AcademyMan
{
    int year;
    char * groupName;

public:
    Student(int _age, const char* _name
        , const char* _phoneNumber, int _year
        , const char * _group_name
        , bool _status = true);
    Student(Student& obj);
    Student() :Student(0, "Joe Doe", "000000", 1970, "DefaultGroup") {};
    void print();
    ~Student();
    static char className[50];
    static int classId;
    static Student GetDefaltObject();
    void setAge(int age);
    void setStatus(bool new_status);

};



