#include "Square.h"

Square::Square(double weight, double height) :TwoDimensionShape(weight, height) {
}
double Square::getArea() {
	//2���� ������ ���簢���� ���̴� ����X����
	cout << "Square area calculated\n";
	return getFirst() * getSecond();
}