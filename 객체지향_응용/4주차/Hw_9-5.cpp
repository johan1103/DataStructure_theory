#include<iostream>
#include<string>
#include"Complex.h"
using std::cout;
using std::cin;

int main() {
	Complex temp_1;
	temp_1.setComplex(2, 3);
	Complex temp_2(4, 3.2);
	temp_1.addComplex(temp_2);
	cout << "temp_1 : ";
	temp_1.printComplex();
	temp_2.subComplex(temp_1);
	cout << "\ntemp_2 : ";
	temp_2.printComplex();
	return 0;
}