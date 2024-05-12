#include <iostream>
#include"Teacher.h"
#include"Student.h"
#include "AcademyMan.h"

struct ExempleType
{
	int a;
	int b;
};

int main()
{
	ExempleType ex{ 10,20 };
	
	int ads[]{ 1,2,3,4,5 };

	Student a(20, "Igor", "26-14-17", 2023, "VBU-122", false);
	Teacher b(34, "Oleg", "27-54-17", nullptr, 5);
	b.print();
	std::cout <<a.classId <<std::endl;
	std::cout << Student::className << std::endl;


	a.setStatus(true);
	a.print();
	Student e = a;
}

