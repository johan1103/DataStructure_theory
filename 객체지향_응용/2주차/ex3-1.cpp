#include<iostream>
using std::cout;
using std::endl;
using std::cin;

class GradeBook {
public:
	void displayMessage() {
		cout << "Welcome to the Grade Book!\n";
	}
};

int main() {
	GradeBook myGradeBook;
	myGradeBook.displayMessage();

	return 0;
}