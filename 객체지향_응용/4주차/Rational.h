#pragma once
#ifndef RATIONAL_H
#define RATIONAL_H
class Rational {
private:
	int numerator;
	int denominator;
public:
	Rational(int num = 0, int den = 1);
	void reduced();
	void setRational(int num, int den);
	void addRat(Rational rat);
	void subRat(Rational rat);
	void multiRat(Rational rat);
	void divRat(Rational rat);
	void printRational();
	void printFloat();
};
#endif // !RATIONAL_H
