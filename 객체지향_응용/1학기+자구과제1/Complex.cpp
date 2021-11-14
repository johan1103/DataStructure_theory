#include"Complex.h"


Complex:: Complex(double real, double img) {
	this->realPart = real;
	this->imaginaryPart = img;
}

Complex Complex:: operator-(const Complex& tmp) {
	Complex result;
	result.realPart = this->realPart - tmp.realPart;
	result.imaginaryPart = this->imaginaryPart - tmp.imaginaryPart;
	return result;
}
void Complex::printComlex() {
	cout << "(" << realPart << " " << imaginaryPart << "i)\n";
}
void Complex::setComplexNumber(double real, double img) {
	this->realPart = real;
	this->imaginaryPart = img;
}
Complex operator+(const Complex& a, const Complex& b) {
	Complex result;
	result.realPart = a.realPart + b.realPart;
	result.imaginaryPart = a.imaginaryPart + b.imaginaryPart;
	return result;
}


