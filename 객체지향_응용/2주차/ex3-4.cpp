#include<iostream>
#include<string>
using namespace std;

class GradeBook {
public:
	string course_name;
public:
	void set_course_name(string name) {
		course_name = name;
	}
	string get_course_name() {
		return course_name;
	}
	void displayMassage() {
		cout << "Welcome to the Grade book for : " << get_course_name() << "\n";
	}
};

int main() {
	GradeBook myGradeBook;
	string nameofCourse;
	cout << myGradeBook.get_course_name() << "\n";

	cout << "please enter the course name : ";
	getline(cin, nameofCourse);
	myGradeBook.set_course_name(nameofCourse);
	cout << myGradeBook.get_course_name() << "\n";
	myGradeBook.displayMassage();
	return 0;
}