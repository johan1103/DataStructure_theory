#include"Shape.h"

Shape::Shape() :area(0) {};
double Shape::getArea() {
	//�������� �Լ��� �������̵��� �����ʾҴٴ� ����
	//�ش� ���� ���� �� �ִ� �������� ���� ���ߴٴ� ���̹Ƿ� ������� ���Ѵٴ� �޼����� ���
	cout << "cannot calculate area\n";
	return 0;
}
double Shape::getVolume() {
	cout << "cannot calculate volume\n";
	return 0;
}