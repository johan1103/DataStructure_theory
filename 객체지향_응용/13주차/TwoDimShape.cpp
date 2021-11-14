#include"TwoDimShape.h"


TwoDimensionShape::TwoDimensionShape(double f, double s) :Shape() {
	setFIrst(f);
	setSecond(s);
}
void TwoDimensionShape::setFIrst(double f) {
	first = f;
}
void TwoDimensionShape::setSecond(double s) {
	second = s;
}
double TwoDimensionShape::getFirst() {
	return first;
}
double TwoDimensionShape::getSecond() {
	return second;
}
double TwoDimensionShape::getArea() {
	cout << "cannot calculate area\n";
	return 0;
}