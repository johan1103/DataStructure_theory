#include "Square.h"

Square::Square(double weight, double height) :TwoDimensionShape(weight, height) {
}
double Square::getArea() {
	//2차원 도형중 직사각형의 넓이는 가로X세로
	cout << "Square area calculated\n";
	return getFirst() * getSecond();
}