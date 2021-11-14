#include<iostream>
#include<string>
#include"Date.h"
using std::cin;
using std::cout;
using std::string;

Date::Date(int m, int d, int y) {
	if (m > 0 && m <= 12)
		month = m;
	else {
		month = 1;
		cout << "Invalid month (" << m << ") set to 1\n";
	}
	year = y;
	day = checkDay(d);

	cout << "Date object constructor for date ";
	print();
	cout << "\n";
}
void Date::print()const {
	cout << month << "/" << day << "/" << year;
}
Date::~Date() {
	cout << "Date object destructor for date ";
	print();
	cout << "\n";
}
int Date::checkDay(int testDay)const {
	static const int daysPerMonth[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

	if (testDay > 0 && testDay <= daysPerMonth[month])
		return testDay;
	if (month == 2 && testDay == 29 && (year % 400 == 0 ||
		(year % 4 == 0 && year % 100 != 0))) {
		return testDay;
	}
	cout << "Invalid day (" << testDay << ") set to 1.\n";
	return 1;
}
