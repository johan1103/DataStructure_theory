#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
	double realPart;
	double imaginaryPart;
public:
	Complex(double real = 0, double img = 0);
	void setComplex(double real, double img);
	void addComplex(Complex com);
	void subComplex(Complex com);
	void printComplex();
};

#endif // !COMPLEX_H
