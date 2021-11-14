#include<iostream>
#include<string>
#include"Rational.h"
using std::cout;
using std::cin;
int main() {
	Rational temp_1;
	temp_1.setRational(12, 38);
	cout << "temp_1 : ";
	temp_1.printRational();
	Rational temp_2(3, 4);
	cout << "\ntemp_2 : ";
	temp_2.printRational();
	temp_1.addRat(temp_2);
	cout << "\ntemp_1(added) : ";
	temp_1.printRational();
	temp_1.subRat(temp_2);
	cout << "\ntemp_1(subtract) : ";
	temp_1.printRational();
	temp_1.multiRat(temp_2);
	cout << "\ntemp_1(multiple) : ";
	temp_1.printRational();
	temp_1.divRat(temp_2);
	cout << "\ntemp_1(divide) : ";
	temp_1.printRational();
	cout << "\ntemp_1(float) : ";
	temp_1.printFloat();
	return 0;
}