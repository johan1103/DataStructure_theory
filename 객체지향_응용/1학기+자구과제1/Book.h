#pragma once
#include<iostream>
#ifndef BOOK_H
#define BOOK_H
using namespace std;
#include <string>
using std::string;

class Book {
private:
	string book;
public:
	Book(string);
	void setBook(string);
	string getBook();
	virtual void print()const;
	virtual ~Book();
};


#endif // !BOOK_H
