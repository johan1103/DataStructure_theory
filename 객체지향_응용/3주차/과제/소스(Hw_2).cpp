#include<iostream>
#include<string>
#include"Hw_2.h"
using namespace std;

Date::Date(int mon, int d, int y) {
	setMonth(mon);
	setDay(d);
	setYear(y);
}
void Date::setMonth(int mon) {
	if (mon > 12 || mon < 1)
		month = 1;
	else
		month = mon;
}
int Date::getMonth() {
	return month;
}
void Date::setDay(int d) {
	day = d;
}
int Date::getDay() {
	return day;
}
void Date::setYear(int y) {
	year = y;
}
int Date::getYear() {
	return year;
}
void Date::displayDate() {
	cout << month << "/" << day << "/" << year << "\n";
}