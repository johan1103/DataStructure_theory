#include"Shape.h"

Shape::Shape() :area(0) {};
double Shape::getArea() {
	//다형성의 함수가 오버라이딩이 되지않았다는 뜻은
	//해당 값을 구할 수 있는 차원까지 가지 못했다는 뜻이므로 계산하지 못한다는 메세지를 출력
	cout << "cannot calculate area\n";
	return 0;
}
double Shape::getVolume() {
	cout << "cannot calculate volume\n";
	return 0;
}