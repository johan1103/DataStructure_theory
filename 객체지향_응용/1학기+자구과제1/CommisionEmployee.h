#pragma once
#ifndef COMMISSION_H
#define COMMISSION_H
#include<iostream>
#include<string>
using std::string;

class tmp {
public:
	tmp() {
		std::cout << "tmp construct\n";
	}
	~tmp()
	{
		std::cout << "tmp destruct\n";
	}
};
class commissionEmployee {
public:
	commissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0);
	~commissionEmployee();
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

	double earnings()const;
	void print()const;
private:
	string firstName;
	string lastName;
	string socialSecurityNumber;
	double grossSales;
	double commissionRate;
};

#endif