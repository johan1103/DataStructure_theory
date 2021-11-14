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

double BasePlusCommissionEmployee::earnings()const {
	return baseSalary + (getCommissionRate() * getGrossSales());
}

void BasePlusCommissionEmployee::print()const {
	cout << "base salaried commission employee: " << getFirstName() << " "
		<< getLastName() << " =\nsocial security number: " << getSocialSecurityNumber()
		<< "\ngross sales: " << getGrossSales() << "\ncommission rate: "
		<< getCommissionRate() << "\nbase salary: " << getBaseSalary() << "\n";
}


double BasePlusCommissionEmployee::earnings_nonpoly()const {
	return baseSalary + (getCommissionRate() * getGrossSales());
}

void BasePlusCommissionEmployee::print_nonpoly()const {
	cout << "base salaried commission employee: " << getFirstName() << " "
		<< getLastName() << " =\nsocial security number: " << getSocialSecurityNumber()
		<< "\ngross sales: " << getGrossSales() << "\ncommission rate: "
		<< getCommissionRate() << "\nbase salary: " << getBaseSalary() << "\n";
}

