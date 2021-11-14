#include<iostream>
#include<string>
using namespace std;

class Employee {
private:
	string first_name;
	string last_name;
	int monthly_salary;
public:
	Employee(string first, string last, int salary) {
		set_first_name(first);
		set_last_name(last);
		set_monthly_salary(salary);
	}
	void set_first_name(string first) {
		first_name = first;
	}
	string get_first_name() {
		return first_name;
	}
	void set_last_name(string last) {
		last_name = last;
	}
	string get_last_name() {
		return last_name;
	}
	void set_monthly_salary(int salary) {
		if (salary < 0)
			monthly_salary = 0;
		else
			monthly_salary = salary;
	}
	int get_monthly_salary() {
		return monthly_salary;
	}
	int get_yearly_salary() {
		return monthly_salary * 12;
	}

};

int main() {
	Employee employee_1("Lisa","Robert", 5400);
	Employee employee_2("Mark", "stein", 4800);
	cout << "Employee's yearly salaries : \n";
	cout << employee_1.get_first_name() << " " << employee_1.get_last_name() << " : "
		<< employee_1.get_yearly_salary() << "\n";
	cout << employee_2.get_first_name() << " " << employee_2.get_last_name() << " : "
		<< employee_2.get_yearly_salary() << "\n";

	return 0;
}