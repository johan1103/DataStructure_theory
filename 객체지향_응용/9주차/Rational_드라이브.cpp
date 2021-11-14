#include<iostream>
#include"Rational.h"
using std::cin;
using std::cout;

int main() {
	RationalNumber n1(8, 12);
	RationalNumber n2(1, 4);
	cin >> n2;
	n1.printRational();
	cout << "\n";
	n2.printRational();
	cout << "\n";
	if (n1 > n2) {
		cout << "n1 is bigger than n2\n";
	}
	else if (n2 > n1) {
		cout << "n2 is bigger than n1\n";
	}
	else if (n1 == n2) {
		cout << "n1 and n2 have same value\n";
	}
	
	RationalNumber n3 = n1 + n2;
	cout << "-----print 함수 사용해 출력-----\n";
	cout << "n1 + n2 : ";
	n3.printRational();
	cout << "\n";
	n3 = n1 - n2;
	cout << "n1 - n2 : ";
	n3.printRational();
	cout << "\n";
	n3 = n1 * n2;
	cout << "n1 * n2 : ";
	n3.printRational();
	cout << "\n";
	n3 = n1 / n2;
	cout << "n1 / n2 : ";
	n3.printRational();
	cout << "\n";
	cout << "-----cout 사용해 출력-----\n";
	cout << "n1 + n2 : " << n1 + n2 << "\n";
	cout << "n1 - n2 : " << n1 - n2 << "\n";
	cout << "n1 * n2 : " << n1 * n2 << "\n";
	cout << "n1 / n2 : " << n1 / n2 << "\n";
	
}