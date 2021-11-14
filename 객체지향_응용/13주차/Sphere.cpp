#include"Sphere.h"


Sphere::Sphere(double rad) :ThreeDimensionShape(rad, 0, 0) {
}
double Sphere::getArea() {
	//3���������� ���� �ѳ��̴� 4*pi*r^2
	cout << "Sphere area calculated\n";
	return 4 * 3.141592 * getFirst() * getFirst();
}
double Sphere::getVolume() {
	//3���������� ���� ���Ǵ� 4*pi*r^3/3
	cout << "Sphere volume calculated\n";
	return (4 * getFirst() * getFirst() * getFirst() * 3.141592) / 3;
}