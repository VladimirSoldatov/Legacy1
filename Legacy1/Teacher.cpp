#include "Teacher.h"
#include <string>
#include <cstdio>

Teacher::Teacher(int _age, const char* _name
	, const char* _phoneNumber, const char* _subject, int _grade, bool _status)
	:AcademyMan(_age, _name, _phoneNumber, _status)
	, subject{_subject? new char[strlen(_subject) + 1]:nullptr }

{
	if(subject != nullptr)
	strcpy_s(subject, strlen(_subject) + 1, _subject);
	grade = _grade;

}

void Teacher::print()
{
	AcademyMan::print();
	printf("Subject: %s, Grade: %d\n", subject, grade);
}

void Teacher::setMarks()
{
}

Teacher::~Teacher()
{
	if (subject != nullptr)
		delete[] subject;

}
