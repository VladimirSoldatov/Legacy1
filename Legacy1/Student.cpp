#include "Student.h"

#include <string>
#include <cstdio>


Student::Student(int _age, const char* _name
	, const char* _phoneNumber
	, int _year, const char* _group_name
	, bool _status)
	:AcademyMan(_age, _name, _phoneNumber, _status)
{
	groupName = new char[strlen(_group_name) + 1];
	year = _year;
	strcpy_s(groupName, strlen(_group_name) + 1, _group_name);

}

Student::Student(Student& obj)
{
	
}

void Student::print()
{
	AcademyMan::print();
	printf("Year: %d, Group: %s\n", year, groupName);
}
char Student::className[50]{"Student"};
int Student::classId = 1;
Student::~Student()
{
	if (groupName != nullptr)
		delete[] groupName;
}



void Student::setAge(int age)
{
	AcademyMan::setAge(age);
}

void Student::setStatus(bool new_status)
{
	status = new_status;
}



