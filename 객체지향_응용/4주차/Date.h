#pragma once
#ifndef DATE_H
#define DATE_H
class Date {
private:
	int month;
	int day;
	int year;
	int checkDay(int)const;
public:
	Date(int m = 1, int d = 1, int y = 2000);
	void print()const;
	~Date();
};

#endif // !DATE_H

