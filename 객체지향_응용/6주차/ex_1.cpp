#include<iostream>
using namespace std;

#include "Employee.h"

int main() {
	Date birth(7, 24, 1949);
	Date hire(3, 13, 1988);
	Employee manager("Bob", "Blue", birth, hire);

	cout << "\n";
	manager.print();
	cout << "Test Date";
	Date lastDayOff(14, 35, 1994);
	cout << "\n";
	return 0;
}