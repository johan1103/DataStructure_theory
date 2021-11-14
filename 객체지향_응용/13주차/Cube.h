#ifndef CUBE_H
#define CUBE_H

#include"ThreeDimShape.h"

class Cube :public ThreeDimensionShape {
private:
public:
	Cube(double width, double length, double height);
	virtual double getArea();
	virtual double getVolume();
};

#endif // !CUBE_H
