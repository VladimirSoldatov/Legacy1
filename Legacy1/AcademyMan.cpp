#include "AcademyMan.h"
#include "string.h"
#include "stdio.h"

AcademyMan::AcademyMan(int _age, const char* _name, const char* _phoneNumber):Human(_age, _name)
{
	strcpy_s(phoneNumber, strlen(_phoneNumber) + 1, _phoneNumber);
}

void AcademyMan::print()
{
	Human::print();
	printf("PhoneNumber: %s\n", phoneNumber);
}
