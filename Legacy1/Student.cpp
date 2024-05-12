#include "Student.h"

#include <string>
#include <cstdio>


Student::Student(int _age, const char* _name
	, const char* _phoneNumber
	, int _year, const char* _group_name)
	:AcademyMan(_age, _name, _phoneNumber)
{
	year = _year;
	strcpy_s(groupName, strlen(_group_name) + 1, _group_name);
}

void Student::print()
{
	AcademyMan::print();
	printf("Year: %d, Group: %s\n", year, groupName);
}
