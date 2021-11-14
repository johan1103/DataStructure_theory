#include"Media.h"

Media::Media(string title, int length){
	setTitle(title);
	setLength(length);
	//Media Ŭ������ ���� �� ������ count�� 1�� ����
	count += 1;
}
Media::~Media()
{
	// Media Ŭ������ �Ҹ� �� ������ count�� 1�� ����
	count -= 1;
	// ���������� �Ҹ�Ǵ��� ���� Ȯ�� ���� ���ڿ� ���
	cout << "Media destructor\n";
	cout << "now count " << count << "\n";
}
// Media Ŭ������ ���� +������ �����ε�
// main���� +�� ������� �����Ϳ� ���� �����ֹǷ� return�� ������ ��
// ���ڶ��� ������������ �����Ƿ� ���� ���� ��������
Media* Media:: operator+(const Media* m) {
	// ���̸� �����ؼ� �ڱ� �ڽ��� �ּҰ��� return
	this->length += m->length;
	return this;
}
//length �� title�� �����ϰ� Ȯ���� �� �ִ� set,get �Լ�
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
// �������� ���� play �Լ� (virtual Ű���� ����),(�������̵�)
void Media::play() {
	cout << "Media";
}



// <<������ ����
ostream& operator<<(ostream& output, Media* a) {
	// <<������ ���۷������Լ��� virtual������ �Ұ����ϹǷ�
	// ������ ����� ������ִ� ����Լ� play�� ȣ���ؼ� ���Ե� ��ü�� Ŭ���� Ȯ�ΰ���
	a->play();
	output << "�� play�ǰ� �ֽ��ϴ�.\n";
	return output;
}