#pragma once
class Human//����������� ������������ �����
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

