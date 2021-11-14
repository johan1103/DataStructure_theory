#include<iostream>
#include"Time.h"
using namespace std;

int main() {
	Time t1(23, 55, 57);
	Time t2;
	Time t3(11, 59, 59);
	Time t4(10, 9, 59);
	for (int i = 0; i < 1; i++) {
		t1.printStandard();
		cout << "\n";
		t1.tick();
	}
	for (int i = 0; i < 250; i++) {
		t1.printUniversal();
		cout << "\n";
		t1.tick();
	}
	cout << "\n\n\n" << "생성된 Time 클래스의 객체 수 : " << Time::time_count;
	return 0;
}