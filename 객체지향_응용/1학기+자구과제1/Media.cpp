#include"Media.h"

Media::Media(string title, int length){
	setTitle(title);
	setLength(length);
	//Media 클래스가 생성 될 때마다 count값 1씩 증가
	count += 1;
}
Media::~Media()
{
	// Media 클래스가 소멸 될 때마다 count값 1씩 감소
	count -= 1;
	// 정상적으로 소멸되는지 여부 확인 위해 문자열 출력
	cout << "Media destructor\n";
	cout << "now count " << count << "\n";
}
// Media 클래스를 위한 +연산자 오버로딩
// main에서 +한 결과값을 포인터에 대입 시켜주므로 return은 포인터 형
// 인자또한 포인터형으로 받으므로 인자 또한 포인터형
Media* Media:: operator+(const Media* m) {
	// 길이만 덧셈해서 자기 자신의 주소값을 return
	this->length += m->length;
	return this;
}
//length 와 title을 설정하고 확인할 수 있는 set,get 함수
void Media::setLength(int length) {
	this->length = length;
}
int Media::getLength() {
	return this->length;
}
void Media::setTitle(string title) {
	this->title = title;
}
string Media::getTitle() {
	return this->title;
}
// 다형성을 위한 play 함수 (virtual 키워드 선언),(오버라이딩)
void Media::play() {
	cout << "Media";
}



// <<연산자 정의
ostream& operator<<(ostream& output, Media* a) {
	// <<연산자 오퍼레이터함수는 virtual선언이 불가능하므로
	// 다형성 출력을 담당해주는 멤버함수 play를 호출해서 대입된 객체의 클래스 확인가능
	a->play();
	output << "가 play되고 있습니다.\n";
	return output;
}