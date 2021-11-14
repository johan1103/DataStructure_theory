#include<iostream>
#include"PhoneNumber.h"
using namespace std;

int main() {
	PhoneNumber phone;

	cout << "Emter phone number in the form (123) 456-789:\n";
	cin >> phone;
	cout << "The phone number entered entered was: ";
	cout << phone << "\n";
	return 0;
}