#ifndef CIRCLE_H
#define CIRCLE_H
#include"TwoDimShape.h"

class Circle:public TwoDimensionShape {
private:
public:
	Circle(double r);
	virtual double getArea();
};

#endif // !CIRCLE_H
