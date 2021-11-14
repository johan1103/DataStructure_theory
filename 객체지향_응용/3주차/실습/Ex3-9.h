#pragma once
#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;

class GradeBook {
private:
	string courseName;
public:
	GradeBook(string name);
	void setCourseName(string name);
	string getCourseName();
	void displayMessage();
};