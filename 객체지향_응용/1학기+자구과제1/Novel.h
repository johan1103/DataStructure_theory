#pragma once
#ifndef NOVEL_H
#define NOVEL_H
#include"Book.h"
#include<iostream>
using namespace std;
class Novel :public Book {
public:
	Novel(string);
	void print()const;
	~Novel();

};

#endif // !NOVEL_H
