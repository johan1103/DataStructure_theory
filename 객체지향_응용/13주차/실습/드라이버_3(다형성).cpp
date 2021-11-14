#include<iostream>
using namespace std;

#include<iomanip>
#include"BasePlusCommissionEmployee.h"
int main() {
	commissionEmployee employee("Kim", "Koo", "113-33-3333", 4000, .03);
	BasePlusCommissionEmployee Base_employee("Bob", "Lewis", "333-33-3333", 5000, .04, 300);
	commissionEmployee* employee_ptr = &Base_employee;
	cout << "earnings : " << employee_ptr->earnings() << "\n";
	employee_ptr->print();
	return 0;
}