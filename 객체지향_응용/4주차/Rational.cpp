#include<iostream>
#include<string>
#include"Rational.h"
using std::cout;
using std::cin;

Rational::Rational(int num, int den) {
	setRational(num, den);
}
void Rational::reduced() {
	int cnt = 2;
	while (cnt <= denominator) {
		if (denominator % cnt == 0 && numerator % cnt == 0) {
			denominator /= cnt;
			numerator /= cnt;
			cnt = 2;
		}
		else
			cnt++;
	}
	return;
}
void Rational::setRational(int num, int den) {
	numerator = num;
	denominator = den;
	reduced();
	return;
}
void Rational::addRat(Rational rat) {
	numerator = numerator * rat.denominator + rat.numerator * denominator;
	denominator *= rat.denominator;
	reduced();
	return;
}
void Rational::subRat(Rational rat) {
	numerator = numerator * rat.denominator - rat.numerator * denominator;
	denominator *= rat.denominator;
	reduced();
	return;
}
void Rational::multiRat(Rational rat) {
	numerator *= rat.numerator;
	denominator *= rat.denominator;
	reduced();
	return;
}
void Rational::divRat(Rational rat) {
	denominator *= rat.numerator;
	numerator *= rat.denominator;
	reduced();
	return;
}
void Rational::printRational() {
	cout << numerator << "/" << denominator;
	return;
}
void Rational::printFloat() {
	cout << float(numerator) / float(denominator);
	return;
}