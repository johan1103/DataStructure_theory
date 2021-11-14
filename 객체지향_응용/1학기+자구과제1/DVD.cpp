#include"DVD.h"


//DVD만 사용하는 변수인 license만 set함수로 설정, 나머지 인자는 Media객체 생성자로 전달
DVD::DVD(string title, int length, string license) :Media(title, length) {
	this->license = license;
}
DVD::~DVD()
{
	//DVD객체가 제대로 소멸했는지 확인 위한 출력문장
	cout << "DVD destructor\n";
}
//license값을 설정,확인 하기 위한 set,get함수
void DVD::setLicense(string license) {
	this->license = license;
}
string DVD::getLicense() {
	return this->license;
}
//다형성을 위한 play함수 (오버라이딩)
void DVD::play() {
	cout << "DVD";
}