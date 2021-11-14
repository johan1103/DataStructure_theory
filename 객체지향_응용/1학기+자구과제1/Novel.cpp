#include<iostream>
#include"Novel.h"
using namespace std;
#include<iomanip>

Novel::Novel(string novel) :Book(novel) {
	cout << "derived Novel - Constructor for " << getBook() << "\n";

}

void Novel::print() const {
	cout << "Novel\n";
}
Novel::~Novel() {
	cout << "derived Novel - Destructor " << getBook() << "\n";
}