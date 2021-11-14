#include"ThreeDimShape.h"


ThreeDimensionShape::ThreeDimensionShape(double f, double s, double t) :Shape() {
	setFirst(f);
	setSecond(s);
	setThird(t);
}
double ThreeDimensionShape::getArea() {
	cout << "cannot calculate area\n";
	return 0;
}
double ThreeDimensionShape::getVolume() {
	cout << "cannot calculate volume\n";
	return 0;
}
void ThreeDimensionShape::setFirst(double f) {
	first = f;
}
void ThreeDimensionShape::setSecond(double s) {
	second = s;
}
void ThreeDimensionShape::setThird(double t) {
	third = t;
}
double ThreeDimensionShape::getFirst() {
	return first;
}
double ThreeDimensionShape::getSecond() {
	return second;
}
double ThreeDimensionShape::getThird() {
	return third;
}