#include<iostream>
#include<string>
using namespace std;

class GradeBook {
private:
	string courseName;
public:
	GradeBook(string name) {
		setCourseName(name);
	}
	void setCourseName(string name) {
		courseName = name;
	}
	string getCourseName() {
		return courseName;
	}
	void displayMessage() {
		cout << "course name : " << getCourseName() << "\n";
	}
};

int main() {
	GradeBook gradeBook1("cs101 Itroduction to C++ programming");
	GradeBook gradeBook2("cs102 DataStructes in c++");
	gradeBook1.displayMessage();
	cout << "\n" << gradeBook2.getCourseName();
	return 0;
}