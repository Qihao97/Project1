#pragma once
#include<string>
class Animal
{
private:
	int age = 0;
	char*  col ="yellow";
public:
	Animal();
	~Animal();
	void setColor(char* s);
	void showColor();
	void setAge(int a);
	void showAge();
};

