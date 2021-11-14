
#ifndef SALARIED_H
#define SALARIED_H
#include<iostream>
#include<string>
using std::string;

#include"Employee.h"

class SalariedEmployee :public Employee{
public:
	SalariedEmployee(const string&, const string&, const string&, double = 0.0);
	void setWeekSalary(double);
	double getWeekSalary()const;

	virtual double earnings();
	virtual void print();
private:
	double weekSalary;
};

#endif