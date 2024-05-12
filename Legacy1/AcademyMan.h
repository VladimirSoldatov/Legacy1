#pragma once
#include "Human.h"

class AcademyMan:Human
{
    char * phoneNumber;
protected:
    bool status;
public:
    AcademyMan(int _age, const char* _name
        , const char* _phoneNumber, bool _status = true);
    void print() override;
    AcademyMan();
    ~AcademyMan();
    void setAge(int age);

};

