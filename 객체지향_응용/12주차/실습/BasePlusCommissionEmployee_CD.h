#pragma once
#ifndef BASEPLUS_CD_H
#define BASEPLUS_CD_H
#include<iostream>
#include<string>
using std::string;

#include "CommisionEmployee_CD.h"

class BasePlusCommissionEmployee :public commissionEmployee {
public:
	BasePlusCommissionEmployee(const string&, double = 0.0,double = 0.0);
	~BasePlusCommissionEmployee();
	void setBaseSalary(double);
	double getBaseSalary()const;

	double earnings()const;
	void print()const;
private:
	double baseSalary;
};

#endif