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
	// ctime을 이용해서 인자가 없을 경우, 현재 시간을 대입해주었다.
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
// 각각 생성자 오버로딩을 통해 입력이 다른경우 모두 같은형식으로
// 저장되도록 코드를 작성해주었다.

void Date::setDay(int d) {
	day = (d >= 1 && d <= daysInMonth(month)) ? d : 1;
}
// 날짜 설정 함수, 범위를 벗어나면 1로 설정을 해준다.
// 해당 월의 최대 일수를 알기 위해 daysInMonth를 호출해서 확인해주었다.
void Date::setMonth(int m) {
	month = (m >= 1 && m <= 12) ? m : 1;
}
// 마찬가지로 해당 월 설정 함수, 범위를 벗어나면 1이 된다.
void Date::print()const {
	cout << "day= " << day << " month=" << month << " year=" << year << "\n";
	return;
}
// 있는 그대로 날짜를 출력하는 함수
void Date::printDDDYYY()const {
	cout << convertDDToDDD() << convertYYYYToYY() << "\n";
	return;
}
// convertDDToDDD 함수와 convertYYYYToYY함수를 통해 변경한 날짜를 출력
void Date::printMMDDYY()const {
	cout << setw(2) << setfill(0) << month << "/" << setw(2) << day << "/" << setw(2) << year % 100 << "\n";
}
//MMDDYY형식으로 출력
void Date::printMonthDDYYYY()const {
	std::string month_list[12] = { "January","February","March","April","May","June","July",
		"August","September","October","November","December" };
	cout << month_list[month-1] << " " << day << "," << year << "\n";
}
//몇 월인지 알기 위해 월별 이름을 저장한 string배열을 정의, 월별 숫자에 맞처 출력을 해준다.
int Date::checkDay(int)const {
	return day;
}
// 단순한 day체크용 함수
int Date::daysInMonth(int m)const {
	int day_month[12] = { 31,30,31,30,31,30,31,31,30,31,30,31 };
	if (isLeapYear)
		day_month[1] = 29;
	else
		day_month[1] = 28;
	return day_month[m - 1];
}
// 월별 최대 일수 설정 LeapYear확인을 통해 윤달이면 29일을 저장
bool Date::isLeapYear()const {

}
int Date::convertDDToDDD()const {
	int ddd_day = 0;
	for (int i = 0; i < month; i++)
		ddd_day += daysInMonth(i);
	ddd_day += day;
	return ddd_day;
}
//일수를 월별 일수까지 더해서 1년중 몇일이 지난지 계산하는함수
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
// 개월수를 입력해주면 정의해준 월별이름에 맞춰 이름을 return해주는 함수
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
//위의 함수와 반대로 월별이름을 받아서 몇월인지 알아내는 함수
int Date::convertYYYYToYY()const {
	return year % 100;
}
// 4자리수 년도를 받아 2자리수로 return하는 함수
void Date::setYYYYFromYY(int YY) {
	year = YY + 2000;
	return;
}
// 2자리수 년도를 받아 4자리수 년도로 설정하는 함수