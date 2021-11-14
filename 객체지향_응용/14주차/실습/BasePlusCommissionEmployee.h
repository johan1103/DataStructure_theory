#pragma once
#ifndef BASEPLUS_H
#define BASEPLUS_H
#include<iostream>
#include<string>
using std::string;

#include "CommisionEmployee.h"

class BasePlusCommissionEmployee :public commissionEmployee{
public:
	BasePlusCommissionEmployee(const string&, const string&, const string&, double = 0.0,
		double = 0.0, double = 0.0);
	void setBaseSalary(double);
	double getBaseSalary()const;

	virtual double earnings();
	virtual void print();
private:
	double baseSalary;
};

#endif