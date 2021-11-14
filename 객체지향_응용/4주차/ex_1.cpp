#include<iostream>
#include<string>
#include"Create.h"
using std::cout;
using std::cin;
using std::string;

void create();

CreateAndDestroy first(1, "(global before main)");

int main() {
	cout << "\nMAIN FUNCTION: EXECUTION BEGINS\n";
	CreateAndDestroy second(2, "(local automatic in main)");
	CreateAndDestroy third(3, "(local static in main)");

	create();

	cout << "\nMAIN FUNCTION: EXECUTION RESUMES\n";
	CreateAndDestroy fourth(4, "(local automatic in main)");
	cout << "\nMAIN FUNCTION: EXECUTION ENDS\n";
	return 0;
}

void create() {
	cout << "\nCREATE FUNCTION: EXECUTION BEGINS\n";
	CreateAndDestroy fifth(5, "(local sutomatic in create)");
	static CreateAndDestroy sixth(6, "(local static in create)");
	CreateAndDestroy seventh(7, "(local automatic in create)");
	cout << "\nCREATE FUNCTION: EXECUTION ENDS\n";
}