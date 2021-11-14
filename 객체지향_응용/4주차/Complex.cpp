#include<iostream>
#include<string>
#include"Complex.h"
using std::cout;
using std::cin;

Complex::Complex(double real, double img) {
	setComplex(real, img);
}
void Complex::setComplex(double real, double img) {
	realPart = real;
	imaginaryPart = img;
}
void Complex::addComplex(Complex com) {
	realPart += com.realPart;
	imaginaryPart += com.imaginaryPart;
	return;
}
void Complex::subComplex(Complex com) {
	realPart -= com.realPart;
	imaginaryPart -= com.imaginaryPart;
	return;
}
void Complex::printComplex() {
	cout << "(" << realPart << "," << imaginaryPart << ")";
	return;
}