#pragma once
#ifndef COMMISSION_H
#define COMMISSION_H
#include<iostream>
#include<string>
#include"Employee.h"
using std::string;

class commissionEmployee:public Employee {
public:
	commissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0);
	void setGrossSales(double);
	double getGrossSales()const;

	void setCommissionRate(double);
	double getCommissionRate()const;

	virtual double earnings();
	virtual void print();
private:
	double grossSales;
	double commissionRate;
};

#endif