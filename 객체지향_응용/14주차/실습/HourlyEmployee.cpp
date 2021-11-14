#include"HourlyEmployee.h"
using std::cout;

HourlyEmployee::HourlyEmployee(const string& first, const string& last,
	const string& ssn, double hourlyWage, double hoursWorked)
	:Employee(first,last,ssn){
	setWage(hourlyWage);
	setHours(hoursWorked);
}
void HourlyEmployee::setWage(double w) {
	wage = w;
}
double HourlyEmployee::getWage()const {
	return wage;
}
void HourlyEmployee::setHours(double h) {
	hours = h;
}
double HourlyEmployee::getHours()const {
	return hours;
}

double HourlyEmployee::earnings() {
	if (getHours() <= 40)
		return getWage() * getHours();
	else
		return 40 * getWage() * ((getHours() - 40) * getWage() * 1.5);
}
void HourlyEmployee::print() {
	cout << "hourly employee : ";
	Employee::print();
	cout << "\nhourly wage : " << getWage() <<
		"; hours worked : " << getHours();
}