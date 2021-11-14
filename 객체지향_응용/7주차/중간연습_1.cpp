#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Time {
private:
	int a;
public:
	int b;
	int c;
	void tmp(int f) {
		int d;
	}
private:
	int e;
};
class Tmp_1 {
private:
	int a;
public:
	Tmp_1(int a_ = -1) {
		a = a_;
	}
	void test() {
		int a = -100;
		cout << a << "\n";
		cout << Tmp_1::a << "\n";
		cout << this->a << "\n----------------------\n";
		a += 1;
		this->a = 30;
		cout << a << "\n";
		cout << Tmp_1::a << "\n";
		cout << this->a;
	}
	~Tmp_1()
	{
		cout << "\ndestructer\n";
	}
};
class Destroy {
public:
	Destroy(int i = 0) :id(i) {
		cout << "construct " << id << "\n";
	}
	~Destroy(){
		cout <<"destroy "<< id << "\n";
	}
private:
	int id;
};

static Destroy id_2(2);
Destroy id_1(1);

int main() {
	/*
	Time t;
	cout << sizeof(t);
	int x = 0;
	*/
	/*
	string name = "012345";
	name = name.substr(0, 2);
	cout << name;
	//01Ãâ·Â
	*/
	/*
	cout << setw(10) << "hello\n";
	cout << setfill('&') << setw(10) << "iomanip" << "\n";
	cout << setw(7) << "hi";
	*/
	/*
	Tmp_1 t(15);
	t.test();
	*/
	/*
	Destroy id_3(3);
	{
		Destroy id_4(4);
	}
	static Destroy id_5(5);
	*/
	return 0;
}