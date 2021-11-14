#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"Employee.h"
using std::cout;
using std::cin;

#include<cstring>
using std::strlen;
using std::strcpy;

int Employee::count = 0;
Employee::Employee(const char* const first, const char* const last) {
	firstName = new char[strlen(first) + 1];
	lastName = new char[strlen(last) + 1];
	strcpy(firstName, first);
	strcpy(lastName, last);
	cout << "Employee constructor for " << firstName << " " <<
		lastName << " called.\n";
	count += 1;
}
Employee::~Employee() {
	cout << "~Employee() called for " << firstName << " " << lastName << "\n";
	delete[]firstName;
	delete[]lastName;
	count -= 1;
}
const char* Employee::getFirstName()const {
	return firstName;
}
const char* Employee::getLastName()const {
	return lastName;
}
int Employee::getCount() {
	return count;
}

void Employee::plus_Count() {
	count += 1;
}