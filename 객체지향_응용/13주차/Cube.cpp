#include"Cube.h"


Cube::Cube(double width, double length, double height) :ThreeDimensionShape(width, length, height) {
}
double Cube::getArea() {
	// ������ü�� �ѳ��̴� 6���� ���� ����
	double result = 0;
	result += getFirst() * getSecond() * 2;
	result += getSecond() * getThird() * 2;
	result += getFirst() * getThird() * 2;
	cout << "Cube area calculated\n";
	return result;
}
double Cube::getVolume() {
	// ������ü�� ���Ǵ� ����*����*����
	cout << "Cube volume calculated\n";
	return getFirst() * getSecond() * getThird();
}