#include"Biography.h"
#include<iostream>
using namespace std;
#include<iomanip>
Biography::Biography(string Bio):Book(Bio){
	cout << "derived Biography - Constructor for " << getBook() << "\n";
}

void Biography::print()const {
	cout << "Biography\n";
}
Biography::~Biography() {
	cout << "derived Novel - destructor\n" << getBook();

}