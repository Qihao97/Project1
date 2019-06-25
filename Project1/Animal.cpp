#include "Animal.h"
#include<iostream>
#include<string>
using namespace std;


Animal::Animal()
{
}


Animal::~Animal()
{
}

void Animal::setColor(char* s) {
	col = s;
}

void Animal::showColor() {
	cout<< col << endl;
}

void Animal::setAge(int a) {
	this->age = a;
}

void Animal::showAge() {
	cout << this->age << endl;
}

