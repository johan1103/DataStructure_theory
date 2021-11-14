#include<iostream>
#include<string>
using namespace std;

class Date {
private:
	int month;
	int day;
	int year;
public:
	Date(int mon, int d, int y) {
		setMonth(mon);
		setDay(d);
		setYear(y);
	}
	void setMonth(int mon) {
		if (mon > 12 || mon < 1)
			month = 1;
		else
			month = mon;
	}
	int getMonth() {
		return month;
	}
	void setDay(int d) {
		day = d;
	}
	int getDay() {
		return day;
	}
	void setYear(int y) {
		year = y;
	}
	int getYear() {
		return year;
	}
	void displayDate() {
		cout << month << "/" << day << "/" << year << "\n";
	}
};

int main() {
	Date temp_1(5, 12, 1999);
	temp_1.displayDate();
	Date temp_2(3, 18, 2021);
	temp_2.displayDate();
	return 0;
}