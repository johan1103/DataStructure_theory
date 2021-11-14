#pragma once
#ifndef BIOGRAPHY_H
#define BIOGRAPHY_H
#include"Book.h"
#include<iostream>
using namespace std;
class Biography :public Book {
public:
	Biography(string);
	void print()const;
	~Biography();
};

#endif // !BIOGRAPHY_H
