#include<iostream>
#include<string>
#include"Employee.h"
using namespace std;

int main() {
	cout << "Number of employees : " <<
		Employee::getCount() << "\n";
	Employee* e1 = new Employee("Sunsan", "Baker");
	Employee* e2 = new Employee("Robert", "Jones");
	cout << "Number of employees : " <<
		e2->getCount() << "\n";
	Employee::plus_Count();
	delete e1;
	delete e2;
	cout << "Number of employees : " <<
		Employee::getCount() << "\n";
	return 1;
}