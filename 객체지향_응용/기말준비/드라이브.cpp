#include<iostream>
#include"Vector.h"
using namespace std;

int main() {
	Vector a;
	Vector b;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	b.push_back(10);
	b.push_back(20);
	Vector c = a + b;
	c = 1 - 2 - c;
	cout << a << "\n" << b << "\n" << c;
	cout << "\n" << c[3];
}