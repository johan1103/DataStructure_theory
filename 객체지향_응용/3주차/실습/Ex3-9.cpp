#include<iostream>
#include<string>
#include"Ex3-9.h"
using namespace std;

int main() {
	GradeBook gradeBook1("cs101 Itroduction to C++ programming");
	GradeBook gradeBook2("cs102 DataStructes in c++");
	gradeBook1.displayMessage();
	cout  << gradeBook2.getCourseName();
	return 0;
}