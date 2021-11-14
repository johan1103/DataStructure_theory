#include"Rational.h"
#define MAX_NUM 2147483646
// �и� 0�϶��� ����� MAX�� ����

RationalNumber::RationalNumber(int num, int den):numerator(num),denominator(den) {
	//�ʱ�ȭ�⸦ ����ؼ� ���� �������� *�ð�����
	this->reduction();
	if (denominator == 0) {
		numerator = MAX_NUM;
		denominator = 1;
	}
	//���� �и�� 0�� ������ �Ǹ� �м������ �Ҽ� ��ȯ�� �Ұ����ϹǷ� MAX_NUM���� ��ȯ������
}
RationalNumber RationalNumber:: operator+(const RationalNumber& rational) {
	RationalNumber result;
	result.denominator = this->denominator * rational.denominator;
	result.numerator = this->numerator * rational.denominator + this->denominator * rational.numerator;
	result.reduction();
	// ���� ��ü�� ���� ��ü�� �򰥸��� �ʰ� �����ϱ����ؼ� this������ ���
	// ������ ���� �� ����ؼ� return����
	// �ٸ� ���� (-,*,/)�� �Ȱ��� ����
	return result;
} // addition
RationalNumber RationalNumber:: operator-(const RationalNumber& rational) {
	RationalNumber result;
	result.denominator = this->denominator * rational.denominator;
	result.numerator = this->numerator * rational.denominator - this->denominator * rational.numerator;
	result.reduction();
	return result;
}// subtraction
RationalNumber RationalNumber:: operator*(const RationalNumber& rational) {
	RationalNumber result;
	result.denominator = this->denominator * rational.denominator;
	result.numerator = this->numerator * rational.numerator;
	result.reduction();
	return result;
} // multiplication
RationalNumber RationalNumber:: operator/(RationalNumber& rational) {
	RationalNumber result;
	result.denominator = this->denominator * rational.numerator;
	result.numerator = this->numerator * rational.denominator;
	if (result.denominator == 0) {
		result.denominator = 1;
		result.numerator = MAX_NUM;
	}
	// ������ �����߿��� ���ڰ� 0�� ���� �������� ���ڷ� ���� �� �����Ƿ� 0�� ��쿣
	// ������� MAX������ ����
	else
		result.reduction();
	return result;
}// division
double RationalNumber::change_to_double() const {
	return double(this->numerator) / double(this->denominator);
	// ���� ������ RationalNumberŬ������ �ٸ� �ڷ������� �� �Ұ����ϹǷ� �Ҽ��� ��ȯ
	// �Ҽ��� �ٲ�� 0�� �Ҽ������� �񱳰� ����
}
// relational operators
bool RationalNumber:: operator>(const RationalNumber& rational) const {
	double result = this->change_to_double() - rational.change_to_double();
	if (result > 0)
		return true;
	else
		return false;
	// ���� �� ���ڸ� ����, ����� ū���̹Ƿ� true ��ȯ, �ƴ� ���� false��ȯ
}
bool RationalNumber:: operator<(const RationalNumber& rational) const {
	double result = this->change_to_double() - rational.change_to_double();
	if (result < 0)
		return true;
	else
		return false;
	// >�����ڿ� ���� ������, �����϶� true��ȯ, �ƴ� ���� false ��ȯ
}
bool RationalNumber:: operator>=(const RationalNumber& rational) const {
	double result = this->change_to_double() - rational.change_to_double();
	if (result >= 0)
		return true;
	else
		return false;
	// ���� ��Һ� �����ڿ� ���������� ������ ��ȣ�� ���Ƿ� result�� 0�� ���� ������
	// ��ȣ�� �־ �Ǵ�
}
bool RationalNumber:: operator<=(const RationalNumber& rational) const {
	double result = this->change_to_double() - rational.change_to_double();
	if (result <= 0)
		return true;
	else
		return false;
	// ���� >=���۷����Ϳ� ������ ����
}
// equality operators
bool RationalNumber:: operator==(const RationalNumber& rational) const {
	double result = this->change_to_double() - rational.change_to_double();
	if (result == 0)
		return true;
	else
		return false;
	// result�� 0�̸� ���� ���� ���̹Ƿ� true, �ƴϸ� false��ȯ
	// �и� ���ڸ� ���� ������ ���� ������, reduction ������ �Ѵ� ���־�� �� �Ӿƴ϶�
	// ���ڰ� 0�϶��� �и� ������� ���� ���̹Ƿ� ���ŷο� ������ �����Ƿ�
}
bool RationalNumber:: operator!=(const RationalNumber& rational) const {
	double result = this->change_to_double() - rational.change_to_double();
	if (result != 0)
		return true;
	else
		return false;
	// ==���۷����Ϳ� ������ ����
}
void RationalNumber::reduction() {
	int div = 2;
	while (this->denominator >= div) {
		if (this->denominator % div == 0 && this->numerator % div == 0) {
			this->denominator /= div;
			this->numerator /= div;
			// div�� �Ѵ� ���� ������ ������ ��� Ȯ���ϸ鼭 ���
		}
		else
			div += 1;
		// �� �̻� �Ѵ� ���� �������� ������ div �� 1���ؼ� ��
		// div���� �и� �Ѿ�� �Ѵ� ���̻� ����� �Ұ����� ���̹Ƿ� �ݺ��� Ż��
	}
	return;
}
void RationalNumber::printRational() const {
	cout << numerator << "/" << denominator;
}// display rational number


// cout,cin ���۷����� �߰�
std::ostream& operator<<(std::ostream& os,const RationalNumber& rational) {
	os << rational.numerator << "/" << rational.denominator;
	return os;
	// <<���۷����� �����ε�
}
std::istream& operator>>(std::istream& is, RationalNumber& rational) {
	is >> rational.numerator;
	is >> rational.denominator;
	rational.reduction();
	return is;
	// >>���۷����� �����ε�,�Է��� �� ���
}