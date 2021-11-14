#include"CommisionEmployee.h"
#include<iostream>
using std::cout;

commissionEmployee::commissionEmployee(const string& first, const string& last,
	const string& ssn, double sales, double rate) {
	cout << "comission construct " << first << "\n";
	firstName = first;
	lastName = last;
	socialSecurityNumber = ssn;
	setGrossSales(sales);
	setCommissionRate(rate);
	
}
commissionEmployee::~commissionEmployee()
{
	cout << "comissiont destruct " << getFirstName() << "\n";
}
void commissionEmployee::setFirstName(const string& first) {
	firstName = first;
}
string commissionEmployee::getFirstName()const {
	return firstName;
}

void commissionEmployee::setLastName(const string& last) {
	lastName = last;
}
string commissionEmployee::getLastName()const {
	return lastName;
}

void commissionEmployee::setSocialSecurityNumber(const string& ssn) {
	socialSecurityNumber = ssn;
}
string commissionEmployee::getSocialSecurityNumber()const {
	return socialSecurityNumber;
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

double commissionEmployee::earnings()const {
	return commissionRate * grossSales;
}
void commissionEmployee::print()const {
	cout << "commission employee: " << firstName << " " << lastName
		<< "\nsocial security number: " << socialSecurityNumber
		<< "\ngross sales: " << grossSales
		<< "\ncommission rate: " << commissionRate;
}