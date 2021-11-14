#include"CommisionEmployee_CD.h"
#include<iostream>
using std::cout;

commissionEmployee::commissionEmployee(const string& first, double sales) {
	firstName = first;
	setGrossSales(sales);
	cout << "commissionEmployee constructor:\n";
	print();
	cout << "\n\n";
}
commissionEmployee::~commissionEmployee() {
	cout << "commissionEmployee destructor:\n";
	print();
	cout << "\n\n";
}
void commissionEmployee::setFirstName(const string& first) {
	firstName = first;
}
string commissionEmployee::getFirstName()const {
	return firstName;
}
void commissionEmployee::setGrossSales(double sales) {
	grossSales = (sales < 0.0) ? 0.0 : sales;
}
double commissionEmployee::getGrossSales()const {
	return grossSales;
}
double commissionEmployee::earnings()const {
	return grossSales;
}
void commissionEmployee::print()const {
	cout << "commission employee: " << firstName
		<< "\ngross sales: " << grossSales;
}