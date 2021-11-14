#include"Date.h"
#include<iomanip>
#include<ctime>
using std::cout;
using std::cin;
using std::setw;
using std::setfill;

Date::Date() {
	time_t timer = time(NULL);
	struct tm* t = localtime(&timer);
	setDay(t->tm_mday);
	setMonth(t->tm_mon);
	setYYYYFromYY(t->tm_year);
	// ctime�� �̿��ؼ� ���ڰ� ���� ���, ���� �ð��� �������־���.
}
Date::Date(int m, int d) {
	setMonth(m);
	setDay(d);
}
Date::Date(int m, int d, int y) {
	setMonth(m);
	setYYYYFromYY(y);
	setDay(d);
}
Date::Date(std::string mon, int y, int d) {
	setMMFromMonth(mon);
	setYYYYFromYY(y);
	setDay(d);
}
// ���� ������ �����ε��� ���� �Է��� �ٸ���� ��� ������������
// ����ǵ��� �ڵ带 �ۼ����־���.

void Date::setDay(int d) {
	day = (d >= 1 && d <= daysInMonth(month)) ? d : 1;
}
// ��¥ ���� �Լ�, ������ ����� 1�� ������ ���ش�.
// �ش� ���� �ִ� �ϼ��� �˱� ���� daysInMonth�� ȣ���ؼ� Ȯ�����־���.
void Date::setMonth(int m) {
	month = (m >= 1 && m <= 12) ? m : 1;
}
// ���������� �ش� �� ���� �Լ�, ������ ����� 1�� �ȴ�.
void Date::print()const {
	cout << "day= " << day << " month=" << month << " year=" << year << "\n";
	return;
}
// �ִ� �״�� ��¥�� ����ϴ� �Լ�
void Date::printDDDYYY()const {
	cout << convertDDToDDD() << convertYYYYToYY() << "\n";
	return;
}
// convertDDToDDD �Լ��� convertYYYYToYY�Լ��� ���� ������ ��¥�� ���
void Date::printMMDDYY()const {
	cout << setw(2) << setfill(0) << month << "/" << setw(2) << day << "/" << setw(2) << year % 100 << "\n";
}
//MMDDYY�������� ���
void Date::printMonthDDYYYY()const {
	std::string month_list[12] = { "January","February","March","April","May","June","July",
		"August","September","October","November","December" };
	cout << month_list[month-1] << " " << day << "," << year << "\n";
}
//�� ������ �˱� ���� ���� �̸��� ������ string�迭�� ����, ���� ���ڿ� ��ó ����� ���ش�.
int Date::checkDay(int)const {
	return day;
}
// �ܼ��� dayüũ�� �Լ�
int Date::daysInMonth(int m)const {
	int day_month[12] = { 31,30,31,30,31,30,31,31,30,31,30,31 };
	if (isLeapYear)
		day_month[1] = 29;
	else
		day_month[1] = 28;
	return day_month[m - 1];
}
// ���� �ִ� �ϼ� ���� LeapYearȮ���� ���� �����̸� 29���� ����
bool Date::isLeapYear()const {

}
int Date::convertDDToDDD()const {
	int ddd_day = 0;
	for (int i = 0; i < month; i++)
		ddd_day += daysInMonth(i);
	ddd_day += day;
	return ddd_day;
}
//�ϼ��� ���� �ϼ����� ���ؼ� 1���� ������ ������ ����ϴ��Լ�
void Date::setMMDDFromDDD(int DDD) {
	int tmp_m = 1;
	while (DDD >= daysInMonth(tmp_m)) {
		DDD -= daysInMonth(tmp_m);
		tmp_m += 1;
	}
	month = tmp_m;
	day = DDD;
	return;
}
std::string Date::convertMMToMonth(int MM)const {
	std::string month_list[12] = { "January","February","March","April","May","June","July",
		"August","September","October","November","December" };
	return month_list[MM - 1];
}
// �������� �Է����ָ� �������� �����̸��� ���� �̸��� return���ִ� �Լ�
void Date::setMMFromMonth(std::string Month) {
	std::string month_list[12] = { "January","February","March","April","May","June","July",
	"August","September","October","November","December" };
	for (int i = 0; i < 12; i++) {
		if (Month == month_list[i]) {
			month = i + 1;
			break;
		}
	}
	return;
}
//���� �Լ��� �ݴ�� �����̸��� �޾Ƽ� ������� �˾Ƴ��� �Լ�
int Date::convertYYYYToYY()const {
	return year % 100;
}
// 4�ڸ��� �⵵�� �޾� 2�ڸ����� return�ϴ� �Լ�
void Date::setYYYYFromYY(int YY) {
	year = YY + 2000;
	return;
}
// 2�ڸ��� �⵵�� �޾� 4�ڸ��� �⵵�� �����ϴ� �Լ�