#include"Cube.h"


Cube::Cube(double width, double length, double height) :ThreeDimensionShape(width, length, height) {
}
double Cube::getArea() {
	// 직육면체의 겉넓이는 6개의 면의 넓이
	double result = 0;
	result += getFirst() * getSecond() * 2;
	result += getSecond() * getThird() * 2;
	result += getFirst() * getThird() * 2;
	cout << "Cube area calculated\n";
	return result;
}
double Cube::getVolume() {
	// 직육면체의 부피는 가로*세로*높이
	cout << "Cube volume calculated\n";
	return getFirst() * getSecond() * getThird();
}