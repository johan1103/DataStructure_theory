#ifndef SQAURE_H
#define SQAURE_H
#include"TwoDimShape.h"

class Square :public TwoDimensionShape {
private:
public:
	Square(double weight, double height);
	virtual double getArea();
};


#endif // !SQAURE_H
