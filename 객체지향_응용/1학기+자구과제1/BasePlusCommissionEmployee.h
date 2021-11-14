#pragma once
#ifndef BASEPLUS_H
#define BASEPLUS_H
#include<iostream>
#include<string>
using std::string;
#include "CommisionEmployee.h"


class BasePlusCommissionEmployee :public commissionEmployee, public tmp{
public:
	BasePlusCommissionEmployee(const string&, const string&, const string&, double = 0.0,
		double = 0.0, double = 0.0);
	~BasePlusCommissionEmployee()
	{
		std::cout << "basecommission destruct " << getFirstName() << "\n";
	}
	void setBaseSalary(double);
	double getBaseSalary()const;
	double earnings()const;
	void print()const;
private:
	double baseSalary;
};

#endif