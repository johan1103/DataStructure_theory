#include<iostream>
using std::cout;
using std::cin;
#include"Count.h"

int main() {
	Count counter;
	Count* counterPtr = &counter;
	Count& counterRef = counter;

	cout << "Set x to 1 and print using object\n";
	counter.setX(1);
	counter.print();
	cout << "Set x to 2 and print using object\n";
	counterRef.setX(2);
//	counter.print();
	counterRef.print();
	cout << "Set x to 3 and print using object\n";
	counterPtr->setX(3);
//	counter.print();
	counterPtr->print();
	return 0;
}