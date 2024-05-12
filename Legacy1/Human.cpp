#include "Human.h"
#include"string.h"
#include <cstdio>

Human::Human(int _age, const char* _name)
	:name{_name ? new char[strlen(_name) + 1] : nullptr}, age{_age}
{
	strcpy_s(name,strlen(_name) + 1, _name);
}

Human::Human():Human(10, "John Doe")
{
}

Human::~Human()
{
	if (name != nullptr)
		delete[]name;
}

void Human::print()
{
	printf("Name: %s, Age: %d\n", name, age);
}

void Human::setAge(int age)
{
	this->age = age;
}
