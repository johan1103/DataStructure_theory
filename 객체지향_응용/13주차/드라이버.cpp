#include<iostream>
#include"Circle.h"
#include"Square.h"
#include"Cube.h"
#include"Sphere.h"
#include<vector>

int main() {
	Circle tmp_1(3);
	Square tmp_2(2, 5);
	Sphere tmp_3(4);
	Cube tmp_4(3, 4, 5);
	Sphere tmp_5(2);
	TwoDimensionShape tmp_6(1, 2);
	ThreeDimensionShape tmp_7(3, 4, 5);
	Shape tmp_8;

	// Shape의 클래스형을 담은 vector배열 생성
	vector<Shape*> ShapeArr;
	ShapeArr.push_back(&tmp_1);
	ShapeArr.push_back(&tmp_2);
	ShapeArr.push_back(&tmp_3);
	ShapeArr.push_back(&tmp_4);
	ShapeArr.push_back(&tmp_5);
	ShapeArr.push_back(&tmp_6);
	ShapeArr.push_back(&tmp_7);
	ShapeArr.push_back(&tmp_8);// Shape의 모든 파생클래스들의 주소값을 push

	for (int i = 0; i < ShapeArr.size(); i++) {
		cout << ShapeArr[i]->getArea() << "\n";
		cout << ShapeArr[i]->getVolume() << "\n\n";
	}

	return 0;
}