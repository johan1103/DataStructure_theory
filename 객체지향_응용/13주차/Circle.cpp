#include"Circle.h"


Circle::Circle(double r) :TwoDimensionShape(r, 0) {
}
double Circle::getArea() {
	//2���� ������ ���� ���̴� r^2*pi
	cout << "Circle area calculated\n";
	return getFirst() * getFirst() * 3.141592;
}