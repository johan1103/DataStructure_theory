#include<iostream>
#include<string>
#include"Ex3-9.h"
using std::string;
using std::cout;
using std::cin;

GradeBook::GradeBook(string name) {
	setCourseName(name);
}
void GradeBook::setCourseName(string name) {
	courseName = name;
}
string GradeBook::getCourseName() {
	return courseName;
}
void GradeBook::displayMessage() {
	cout << "course name : " << getCourseName() << "\n";
}