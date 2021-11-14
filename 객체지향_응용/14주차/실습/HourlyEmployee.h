#pragma once

#include"Employee.h"

class HourlyEmployee :public Employee {
private:
	double wage;
	double hours;
public:
	HourlyEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0);
	void setWage(double);
	double getWage()const;
	void setHours(double);
	double getHours()const;

	virtual double earnings();
	virtual void print();
};