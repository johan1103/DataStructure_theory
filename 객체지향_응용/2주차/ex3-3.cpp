#include<iostream>
#include<string>
using namespace std;

class GradeBook {
public:
	void displayMessage(string coursename) {
		cout << "Welcome to the Grade Book for :\n" << coursename << "!\n";
	}
};

int main() {
	GradeBook myGradeBook;
	string nameofCourse;
	cout << "please enter the course name : ";
	getline(cin,nameofCourse);
	myGradeBook.displayMessage(nameofCourse);

	return 0;
}