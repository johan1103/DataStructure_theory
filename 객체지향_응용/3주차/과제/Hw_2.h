#pragma once
#include<iostream>
#include<string>
using namespace std;

class Date {
private:
	int month;
	int day;
	int year;
public:
	Date(int mon, int d, int y);
	void setMonth(int mon);
	int getMonth();
	void setDay(int d);
	int getDay();
	void setYear(int y);
	int getYear();
	void displayDate();
};