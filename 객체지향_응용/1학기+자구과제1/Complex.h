#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
using namespace std;
class Complex {
	friend Complex operator+(const Complex& a, const Complex& b);
public:
	Complex(double real = 0, double img = 0);
	Complex operator-(const Complex& tmp);
	void printComlex();
	void setComplexNumber(double real, double img);
private:
	double realPart;
	double imaginaryPart;
};

Complex operator+(const Complex& a, const Complex& b);

#endif // !COMPLEX_H
