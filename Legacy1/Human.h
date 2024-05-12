#pragma once
class Human//Абстрактный родительский класс
{
private:
	char * name;
	int age;
public:
	Human(int _age, const char * _name);
	Human();
	~Human();
	virtual void print();
	void setAge(int age);
	

};

