#include "Human.h"
#include"string.h"
#include <cstdio>

Human::Human(int _age, const char * _name)
{
	age = _age;
	strcpy_s(name,strlen(_name) + 1, _name);
}

Human::Human():Human(10, "John Doe")
{
}

void Human::print()
{
	printf("Name: %s, Age: %d\n", name, age);
}
