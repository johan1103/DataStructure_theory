#include<iomanip>
using std::setprecision;
using std::fixed;
#include"CommisionEmployee.h"
using std::cout;

int main() {
	commissionEmployee employee(
		"Sue", "Jones", "222-22-2222", 10000, .06);
	cout << fixed << setprecision(2);

	cout << "Employee information obtained bt get funcions: \n"
		<< "\nFirst name is " << employee.getFirstName()
		<< "\nLast name is " << employee.getLastName()
		<< "\nsocial security num : " << employee.getSocialSecurityNumber()
		<< "\ngross sales is " << employee.getGrossSales()
		<< "\ncommission rate is " << employee.getCommissionRate() << "\n";
	employee.setGrossSales(8000);
	employee.setCommissionRate(0.1);
	cout << "\nUpdated employee information output\n";
	employee.print();
	cout << "\n Employee's earnings: $" << employee.earnings() << "\n";
	return 0;

}