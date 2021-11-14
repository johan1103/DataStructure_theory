#include<iostream>
#include <cstring>
using namespace std;

#include "Employee.h";
#include "Date.h"

Employee::Employee(const char* const first, const char* const last
	, const Date& dateOfBirth, const Date& dateOfHire) :birthDate(dateOfBirth),
	hireDate(dateOfHire) {
	int length = strlen(first);
	length = (length < 25 ? length : 24);
	strncpy(firstName, first, length);
	firstName[length] = '\0';
	length = strlen(last);
	length = (length < 25 ? length : 24);
	strncpy(lastName, last, length);
	lastName[length] = '\0';

	cout << "Employee objecct constructor : "
	<< firstName << ' ' << lastName << "\n";
}

void Employee::print()const {
	cout << lastName << ", " << firstName << ", " << "hired: ";
	hireDate.print();
	cout << "Birthdat : ";
	birthDate.print();
	cout << "\n";
}
Employee::~Employee() {
	cout << "Employee object destructor: " <<
		lastName << " " << firstName << "\n";
}