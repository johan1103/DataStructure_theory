#include"VTR.h"

//추가된 format값은 set함수로 설정, 나머지 인자는 Media생성자로 전달
VTR::VTR(string title, int length, string format) :Media(title, length) {
	setFormat(format);
}
VTR::~VTR()
{
	cout << "VTR destructor\n";
}
// Format값을 설정,확인하기 위한 set,get 함수
void VTR::setFormat(string format) {
	this->format = format;
}
string VTR::getFormat() {
	return this->format;
}
// 다형성을 위한 play 함수 (오버라이딩)
void VTR::play() {
	cout << "VTR";
}
