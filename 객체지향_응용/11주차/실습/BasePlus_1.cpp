#include<iostream>
#include"BasePlus_1.h"
using std::cout;

Base_Employee::Base_Employee(const string& first, const string& last,
	const string& ssn, double sales, double rate,double salary) {
	firstName = first;
	lastName = last;
	socialSecurityNumber = ssn;
	setGrossSales(sales);
	setCommissionRate(rate);
	setBaseSalary(salary);
}
void Base_Employee::setFirstName(const string& first) {
	firstName = first;
}
string Base_Employee::getFirstName()const {
	return firstName;
}

void Base_Employee::setLastName(const string& last) {
	lastName = last;
}
string Base_Employee::getLastName()const {
	return lastName;
}

void Base_Employee::setSocialSecurityNumber(const string& ssn) {
	socialSecurityNumber = ssn;
}
string Base_Employee::getSocialSecurityNumber()const {
	return socialSecurityNumber;
}


void Base_Employee::setGrossSales(double sales) {
	grossSales = (sales < 0.0) ? 0.0 : sales;
}
double Base_Employee::getGrossSales()const {
	return grossSales;
}

void Base_Employee::setCommissionRate(double rate) {
	commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}
double Base_Employee::getCommissionRate()const {
	return commissionRate;
}

double Base_Employee::earnings()const {
	return commissionRate * grossSales;
}
void Base_Employee::print()const {
	cout << "commission employee: " << firstName << " " << lastName
		<< "\nsocial security number: " << socialSecurityNumber
		<< "\ngross sales: " << grossSales
		<< "\ncommission rate: " << commissionRate;
}
double Base_Employee::earnings()const {
	return commissionRate * grossSales;
}
void Base_Employee::print()const {
	cout << "Base - commission employee: " << firstName << " " << lastName
		<< "\nsocial security number: " << socialSecurityNumber
		<< "\ngross sales: " << grossSales
		<< "\ncommission rate: " << commissionRate;
}
void Base_Employee::setBaseSalary(double salary) {
	baseSalary = (salary < 0.0) ? 0.0 : salary;
}
double Base_Employee::getBaseSalary()const {
	return baseSalary;
}