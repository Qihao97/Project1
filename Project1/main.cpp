#include<iostream>
#include<string>
#include"Animal.h"
using namespace std;

int main() {
	int i=2;
	while (i > 0) {
		cout << "ÎÒ°®Üç¼Ñ¼Ñ" << endl;
		i--;
	}

	Animal ani;
	ani.showColor();
	ani.setColor("white");
	ani.showAge();
	ani.setAge(12);
	ani.showAge();
	ani.showColor();

	int a;
	cin >> a;
	return 0;
}