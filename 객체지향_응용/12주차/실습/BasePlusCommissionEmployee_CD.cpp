#include"BasePlusCommissionEmployee_CD.h"
using std::cout;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string& first, double sales,double salary)
	:commissionEmployee(first,sales)
{
	setBaseSalary(salary);
	cout << "BasePlusCommissionEmplyoee constructor:\n";
	print();
	cout << "\n\n";
}
BasePlusCommissionEmployee::~BasePlusCommissionEmployee() {
	cout << "BasePlusCommissionEmplyoee destructor:\n";
	print();
	cout << "\n\n";
}
void BasePlusCommissionEmployee::setBaseSalary(double salary) {
	baseSalary = (salary < 0.0) ? 0.0 : salary;
}
double BasePlusCommissionEmployee::getBaseSalary()const {
	return baseSalary;
}

double BasePlusCommissionEmployee::earnings()const {
	return baseSalary + getGrossSales();
}

void BasePlusCommissionEmployee::print()const {
	cout << "base salaried commission employee: " << getFirstName()
		<< "\ngross sales: " << getGrossSales()
		<< "\nbase salary: " << getBaseSalary() << "\n";
}