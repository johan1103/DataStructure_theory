#include<iostream>
#include<string>
#include"Hw_1.h"
using namespace std;

Employee::Employee(string first, string last, int salary) {
	set_first_name(first);
	set_last_name(last);
	set_monthly_salary(salary);
}
void Employee::set_first_name(string first) {
	first_name = first;
}
string Employee::get_first_name() {
	return first_name;
}
void Employee::set_last_name(string last) {
	last_name = last;
}
string Employee::get_last_name() {
	return last_name;
}
void Employee::set_monthly_salary(int salary) {
	if (salary < 0)
		monthly_salary = 0;
	else
		monthly_salary = salary;
}
int Employee::get_monthly_salary() {
	return monthly_salary;
}
int Employee::get_yearly_salary() {
	return monthly_salary * 12;
}
