#pragma once
class Human
{
	char name[50];
	int age;
public:
	Human(int _age, const char * _name);
	Human();
	virtual void print();
	

};

