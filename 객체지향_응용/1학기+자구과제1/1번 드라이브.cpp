#include"Complex.h"
#include<iostream>

using namespace std;

int main() {
	Complex a;
	Complex b;
	Complex c;
	a.setComplexNumber(15, 20.3);
	b.setComplexNumber(5.5, 7.6);
	c = a + b;
	c.printComlex();
	a.setComplexNumber(50, 10);
	b.setComplexNumber(40, 55);
	c = a - b;
	c.printComlex();
}