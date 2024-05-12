#include "AcademyMan.h"
#include "string.h"
#include "stdio.h"

AcademyMan::AcademyMan(int _age, const char* _name
	, const char* _phoneNumber, bool _status)
	:Human(_age, _name)
	, phoneNumber{new char[strlen(_phoneNumber) + 1] }, status{_status}
{
	strcpy_s(phoneNumber, strlen(_phoneNumber) + 1, _phoneNumber);
}

void AcademyMan::print()
{
	Human::print();
	printf("PhoneNumber: %s\n", phoneNumber);
}

AcademyMan::AcademyMan(): AcademyMan(0, "Joe Doe", "000000")
{
}

AcademyMan::~AcademyMan()
{
	if (phoneNumber != nullptr)
	{
		delete[] phoneNumber;
	}
}

void AcademyMan::setAge(int age)
{
	Human::setAge(age);
}



