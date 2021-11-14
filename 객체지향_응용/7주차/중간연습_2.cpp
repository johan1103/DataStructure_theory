#include<iostream>
using namespace std;

class Time {
private:
	int hour;
	const int const_hour;
public:
	int temp = 0;
	Time(int h = 0, int c_h = 0) :const_hour((c_h < 10 && c_h>0) ? c_h : 0) {
		setHour(h);
		hour += 1;
	}
	void setHour(int h) {
		hour = h;
	}
	void print()const{
		cout << "hour " << hour << " const_hour : " << const_hour << "\n";
	}
	void tmp(int a)const {
		a += 3;
//		temp += 3; 컴파일 오류
		cout << "input+3 " << a << "\n";
		cout << "temp " << temp << "\n";
	}
};
class t1 {
	friend Time;
private:
public:
	void change_h(Time &t1,int num) {
		t1.setHour(num);
	}
};

int main() {
	/*
	const Time t1(5,11);
	t1.print();
	*/
	/*
	Time t_1(4);
	t_1.print();
	t1 temp;
	temp.change_h(t_1, 10);
	t_1.print();
	*/

}