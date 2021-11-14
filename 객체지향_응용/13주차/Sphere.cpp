#include"Sphere.h"


Sphere::Sphere(double rad) :ThreeDimensionShape(rad, 0, 0) {
}
double Sphere::getArea() {
	//3차원에서의 구의 겉넓이는 4*pi*r^2
	cout << "Sphere area calculated\n";
	return 4 * 3.141592 * getFirst() * getFirst();
}
double Sphere::getVolume() {
	//3차원에서의 구의 부피는 4*pi*r^3/3
	cout << "Sphere volume calculated\n";
	return (4 * getFirst() * getFirst() * getFirst() * 3.141592) / 3;
}