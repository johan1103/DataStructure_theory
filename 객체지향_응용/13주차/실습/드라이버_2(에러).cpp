#include<iostream>
using namespace std;
#include"BasePlusCommissionEmployee.h"

int main() {
	commissionEmployee employee("Kim", "Koo", "113-33-3333", 4000, .03);
	BasePlusCommissionEmployee Base_employee("Bob", "Lewis", "333-33-3333", 5000, .04, 300);
// ¿¡·¯!
//	BasePlusCommissionEmployee* employee_ptr = &employee;
	return 0;
}