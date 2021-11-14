#include"Biography.h"
#include"Book.h"
#include"Novel.h"
#include<iostream>

using namespace std;
int main() {
	Book* tmp_1;
	Book* tmp_2;
	Novel book_1("The Alchemist");
	static Biography book_2("Paulo Coelho");
	tmp_1 = &book_1;
	tmp_2 = &book_2;
	book_1.print();
	book_2.print();
	return 0;
}