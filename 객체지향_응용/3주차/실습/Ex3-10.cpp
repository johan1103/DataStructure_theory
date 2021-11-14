#include<iostream>
#include<string>
#include"Ex3-9.h"
using namespace std;

int main() {
	GradeBook gradeBook1("cs101 Introduction to C++ programming");
	GradeBook gradeBook2("cs102 DataStructes in C++");
	cout << "gradebook1's course name : " << gradeBook1.getCourseName() << "\n";
	cout << "gradebook2's course name : " << gradeBook2.getCourseName() << "\n";
	return 0;
}