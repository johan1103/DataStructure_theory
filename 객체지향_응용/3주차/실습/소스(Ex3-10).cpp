#include<iostream>
#include<string>
#include"Ex3-10.h"
using std::string;
using std::cout;
using std::cin;

GradeBook::GradeBook(string name) {
	setCourseName(name);
}
void GradeBook::setCourseName(string name) {
	if (name.length() > 25) {
		courseName = name.substr(0, 25);
		cout << "exceed maximum length(25)\n";
	}
	else {
		courseName = name;
	}
}
string GradeBook::getCourseName() {
	return courseName;
}
void GradeBook::displayMessage() {
	cout << "course name : " << getCourseName() << "\n";
}