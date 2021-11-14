#include"Book.h"
#include<iostream>
using namespace std;
#include<iomanip>

Book::Book(string b) {
	setBook(b);
	cout << "Base Book - Constructor for " << getBook() << "\n";
}
void Book::setBook(string b) {
	book = b;
}
string Book::getBook() {
	return book;
}
void Book::print()const {
	cout << "Book\n";
}
Book::~Book() {
	cout << "Base Book - Destructor for " << getBook() << "\n";
}
