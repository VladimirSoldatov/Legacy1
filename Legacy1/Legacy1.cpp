#include <iostream>
#include"Teacher.h"
#include"Student.h"
int main()
{
    Teacher m(20,"Igor","+79991122666", "Informatica", 5);
    m.print();
    std::cout << std::endl;
    Student k(45, "Oleg", "+79991122555", 2023,"C++");
    k.print();
   
}

