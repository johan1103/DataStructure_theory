#include"LegalDVD.h"

//LegalDVD만 쓰는 멤버인 copyRight만 set으로 설정, 나머지 인자는 DVD생성자로 전달
LegalDVD::LegalDVD(string title, int length, string license, string copyRight) :DVD(title, length, license) {
	setCopyRight(copyRight);
}
LegalDVD::~LegalDVD()
{
	// LegalDVD객체가 제대로 소멸 되었는지 확인 위한 출력문장
	cout << "LegalDVD destructor\n";
}
//copyRight값을 설정, 확인하기 위한 set,get 함수
void LegalDVD::setCopyRight(string copyRight) {
	this->copyRight = copyRight;
}
string LegalDVD::getCopyRight() {
	return this->copyRight;
}
//다형성을 위한 play함수 (오버라이딩)
void LegalDVD::play() {
	cout << "LegalDVD";
}