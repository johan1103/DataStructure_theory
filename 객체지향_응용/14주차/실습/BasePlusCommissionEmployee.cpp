#include"BasePlusCommissionEmployee.h"
using std::cout;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string&first,
	const string &last,const string &ssn,double sales,double rate,double salary)
	:commissionEmployee(first,last,ssn,sales,rate)
{
	setBaseSalary(salary);
}

void BasePlusCommissionEmployee::setBaseSalary(double salary) {
	baseSalary = (salary < 0.0) ? 0.0 : salary;
}
double BasePlusCommissionEmployee::getBaseSalary()const {
	return baseSalary;
}

double BasePlusCommissionEmployee::earnings() {
	return getBaseSalary() + commissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print() {
	cout << "base-salaried : ";
	commissionEmployee::print();
	cout << "; base salary: " << getBaseSalary();
}