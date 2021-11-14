#include<iostream>
#include"CommisionEmployee.h"
using std::cout;

commissionEmployee::commissionEmployee(const string& first, const string& last,
	const string& ssn, double sales, double rate):Employee(first,last,ssn) {
	setGrossSales(sales);
	setCommissionRate(rate);
}

void commissionEmployee::setGrossSales(double sales) {
	grossSales = (sales < 0.0) ? 0.0 : sales;
}
double commissionEmployee::getGrossSales()const {
	return grossSales;
}

void commissionEmployee::setCommissionRate(double rate) {
	commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}
double commissionEmployee::getCommissionRate()const {
	return commissionRate;
}

double commissionEmployee::earnings() {
	return getCommissionRate() * getGrossSales();
}
void commissionEmployee::print() {
	cout << "commission employee : ";
	Employee::print();
	cout << "\ngross sales : " << getGrossSales()
		<< "; commission rate : " << getCommissionRate();
}