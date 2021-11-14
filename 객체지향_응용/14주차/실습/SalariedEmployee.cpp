#include"SalariedEmployee.h"
using std::cout;

SalariedEmployee::SalariedEmployee(const string&first,
	const string &last,const string &ssn,double salary)
	:Employee(first,last,ssn)
{
	setWeekSalary(salary);
}

void SalariedEmployee::setWeekSalary(double salary) {
	weekSalary = (salary < 0.0) ? 0.0 : salary;
}
double SalariedEmployee::getWeekSalary()const {
	return weekSalary;
}

double SalariedEmployee::earnings() {
	return getWeekSalary();
}

void SalariedEmployee::print() {
	cout << "salaried employee: ";
	Employee::print();
	cout << "\nweekly Salary: " << getWeekSalary();
}