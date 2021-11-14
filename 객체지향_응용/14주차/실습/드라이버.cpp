#include<iostream>

using std::cout;
using std::cin;
using std::fixed;

#include<iomanip>
using std::setprecision;

#include<vector>
using std::vector;

#include"BasePlusCommissionEmployee.h"
#include"CommisionEmployee.h"
#include"Employee.h"
#include"HourlyEmployee.h"
#include"SalariedEmployee.h"

void virtualViaPointer(Employee*);
void virtualViaReference(Employee&);

int main() {
	cout << fixed << setprecision(2);
	SalariedEmployee s_e("John", "Smith", "111-11-111", 800);
	HourlyEmployee h_e("Karen", "Price", "22-222-2222", 16.75, 40);
	commissionEmployee c_e("Sue", "Jones", "333-33-3333", 10000, 0.06);
	BasePlusCommissionEmployee bc_e("Bob", "Lewis", "444-44-4444", 5000, 0.04, 300);
	cout << "Employees processed using static binding : \n";
	s_e.print();
	cout << "\nearned : " << s_e.earnings() << "\n\n";
	h_e.print();
	cout << "\nearned : " << h_e.earnings() << "\n\n";
	c_e.print();
	cout << "\nearned : " << c_e.earnings() << "\n\n";
	bc_e.print();
	cout << "\nearned : " << bc_e.earnings() << "\n\n";

	vector<Employee*> employees(4);
	employees[0] = &s_e;
	employees[1] = &h_e;
	employees[2] = &c_e;
	employees[3] = &bc_e;

	cout << "Employees processed using dynamic binding : \n";
	cout << "\n\n\n virtualViaPointer\n";
	for (size_t i = 0; i < employees.size(); i++) {
		virtualViaPointer(employees[i]);
		cout << "\n\n";
	}
	cout << "\n\n\n virtualViaReference\n";
	for (size_t i = 0; i < employees.size(); i++) {
		virtualViaReference(*employees[i]);
		cout << "\n\n";
	}
}

void virtualViaPointer( Employee* baseClassPtr) {
	baseClassPtr->print();
	cout << "\nearned : " << baseClassPtr->earnings();
}
void virtualViaReference(Employee& baseClassRef) {
	baseClassRef.print();
	cout << "\nearned : " << baseClassRef.earnings();
}