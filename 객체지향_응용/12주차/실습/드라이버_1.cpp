#include<iostream>
using namespace std;

#include<iomanip>
#include"BasePlusCommissionEmployee.h"
int main() {
	BasePlusCommissionEmployee employee("Bob", "Lewis", "333-33-3333", 5000, .04, 300);
	cout << fixed << setprecision(2);

	cout << "Employee information obtained by get functions: \n"
		<< "\nfirst name is " << employee.getFirstName()
		<< "\nlast name is " << employee.getLastName()
		<< "\nsocial security number is " << employee.getSocialSecurityNumber()
		<< "\ngross sales is " << employee.getGrossSales()
		<< "\nCommission rate is " << employee.getCommissionRate()
		<< "\nBase salary is " << employee.getBaseSalary() << "\n";
	employee.setBaseSalary(1000);
	cout << "\nupdated employee information output bt print function: \n";
	employee.print();
	cout << "\nEmployee;s earnings : $" << employee.earnings() << "\n";
	return 0;
}