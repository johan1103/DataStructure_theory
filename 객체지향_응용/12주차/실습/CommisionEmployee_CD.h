#pragma once
#ifndef COMMISSION_CD_H
#define COMMISSION_CD_H
#include<iostream>
#include<string>
using std::string;

class commissionEmployee {
public:
	commissionEmployee(const string&, double = 0.0);
	~commissionEmployee();
	void setFirstName(const string&);
	string getFirstName()const;

	void setGrossSales(double);
	double getGrossSales()const;

	double earnings()const;
	void print()const;
private:
	string firstName;
	double grossSales;
};

#endif