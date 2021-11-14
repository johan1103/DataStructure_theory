#ifndef SPHERE_H
#define SPHERE_H

#include"ThreeDimShape.h"

class Sphere :public ThreeDimensionShape {
private:
public:
	Sphere(double rad);
	virtual double getArea();
	virtual double getVolume();
};

#endif // !SPHERE_H
