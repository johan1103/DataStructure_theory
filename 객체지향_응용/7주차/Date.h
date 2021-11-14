#pragma once
#ifndef DATE_H
#define DATE_H
#include<iostream>
#include<string>

class Date {
public:
	Date();
	Date(int, int);
	Date(int, int, int);
	Date(std::string, int, int);
	void setDay(int);
	void setMonth(int);
	void print()const;
	void printDDDYYY()const;
	void printMMDDYY()const;
	void printMonthDDYYYY()const;
	int checkDay(int)const;
	int daysInMonth(int)const;
	bool isLeapYear()const;
	int convertDDToDDD()const;
	void setMMDDFromDDD(int);
	std::string convertMMToMonth(int)const;
	void setMMFromMonth(std::string);
	int convertYYYYToYY()const;
	void setYYYYFromYY(int);
private:
	int month;
	int day;
	int year;
};


#endif // !DATE_H
