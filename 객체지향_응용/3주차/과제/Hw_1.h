#pragma once
#include<iostream>
#include<string>
using namespace std;

class Employee {
private:
	string first_name;
	string last_name;
	int monthly_salary;
public:
	Employee(string first, string last, int salary);
	void set_first_name(string first);
	string get_first_name();
	void set_last_name(string last);
	string get_last_name();
	void set_monthly_salary(int salary);
	int get_monthly_salary();
	int get_yearly_salary();
};
