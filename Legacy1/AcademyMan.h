#pragma once
#include "Human.h"
class AcademyMan :
    public Human
{
    char phoneNumber[50];
public:
    AcademyMan(int _age, const char* _name, const char* _phoneNumber);
    void print() override;
};

