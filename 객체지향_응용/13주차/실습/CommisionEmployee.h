#pragma once
#ifndef COMMISSION_H
#define COMMISSION_H
#include<iostream>
#include<string>
using std::string;

class commissionEmployee {
public:
	commissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0);
	void setFirstName(const string&);
	string getFirstName()const;

	void setLastName(const string&);
	string getLastName()const;

	void setSocialSecurityNumber(const string&);
	string getSocialSecurityNumber()const;

	void setGrossSales(double);
	double getGrossSales()const;

	void setCommissionRate(double);
	double getCommissionRate()const;

	virtual double earnings()const;
	virtual void print()const;

	double earnings_nonpoly()const;
	void print_nonpoly()const;
private:
	string firstName;
	string lastName;
	string socialSecurityNumber;
	double grossSales;
	double commissionRate;
};

#endif