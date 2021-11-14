#include<iostream>
#include<string>
#include"Hw_1.h"
using namespace std;

int main() {
	Employee employee_1("Lisa", "Robert", 5400);
	Employee employee_2("Mark", "stein", 4800);
	cout << "Employee's yearly salaries : \n";
	cout << employee_1.get_first_name() << " " << employee_1.get_last_name() << " : "
		<< employee_1.get_yearly_salary() << "\n";
	cout << employee_2.get_first_name() << " " << employee_2.get_last_name() << " : "
		<< employee_2.get_yearly_salary() << "\n";

	return 0;
}