#include"Rational.h"
#define MAX_NUM 2147483646
// 분모가 0일때를 대비한 MAX값 설정

RationalNumber::RationalNumber(int num, int den):numerator(num),denominator(den) {
	//초기화기를 사용해서 값을 대입해줌 *시간절약
	this->reduction();
	if (denominator == 0) {
		numerator = MAX_NUM;
		denominator = 1;
	}
	//만약 분모로 0이 들어오게 되면 분수연산과 소수 전환이 불가능하므로 MAX_NUM으로 전환시켜줌
}
RationalNumber RationalNumber:: operator+(const RationalNumber& rational) {
	RationalNumber result;
	result.denominator = this->denominator * rational.denominator;
	result.numerator = this->numerator * rational.denominator + this->denominator * rational.numerator;
	result.reduction();
	// 본인 객체와 인자 객체를 헷갈리지 않게 구별하기위해서 this포인터 사용
	// 연산이 끝난 후 약분해서 return해줌
	// 다른 연산 (-,*,/)도 똑같이 적용
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
	// 나누기 연산중에는 분자가 0인 값이 나누기의 인자로 들어올 수 있으므로 0인 경우엔
	// 결과값을 MAX값으로 변경
	else
		result.reduction();
	return result;
}// division
double RationalNumber::change_to_double() const {
	return double(this->numerator) / double(this->denominator);
	// 내가 정의한 RationalNumber클래스는 다른 자료형과는 비교 불가능하므로 소수로 전환
	// 소수로 바뀌면 0과 소수끼리의 비교가 가능
}
// relational operators
bool RationalNumber:: operator>(const RationalNumber& rational) const {
	double result = this->change_to_double() - rational.change_to_double();
	if (result > 0)
		return true;
	else
		return false;
	// 비교할 두 숫자를 빼서, 양수면 큰것이므로 true 반환, 아닌 경우는 false반환
}
bool RationalNumber:: operator<(const RationalNumber& rational) const {
	double result = this->change_to_double() - rational.change_to_double();
	if (result < 0)
		return true;
	else
		return false;
	// >연산자와 같은 구조로, 음수일때 true반환, 아닌 경우는 false 반환
}
bool RationalNumber:: operator>=(const RationalNumber& rational) const {
	double result = this->change_to_double() - rational.change_to_double();
	if (result >= 0)
		return true;
	else
		return false;
	// 위의 대소비교 연산자와 마찬가지의 구조로 등호가 들어가므로 result와 0을 비교할 때에도
	// 등호를 넣어서 판단
}
bool RationalNumber:: operator<=(const RationalNumber& rational) const {
	double result = this->change_to_double() - rational.change_to_double();
	if (result <= 0)
		return true;
	else
		return false;
	// 위의 >=오퍼레이터와 동일한 구조
}
// equality operators
bool RationalNumber:: operator==(const RationalNumber& rational) const {
	double result = this->change_to_double() - rational.change_to_double();
	if (result == 0)
		return true;
	else
		return false;
	// result가 0이면 둘이 같은 값이므로 true, 아니면 false반환
	// 분모 분자를 직접 비교하지 않은 이유는, reduction 과정을 둘다 해주어야 할 뿐아니라
	// 분자가 0일때엔 분모에 상관없이 같은 값이므로 번거로운 과정이 있으므로
}
bool RationalNumber:: operator!=(const RationalNumber& rational) const {
	double result = this->change_to_double() - rational.change_to_double();
	if (result != 0)
		return true;
	else
		return false;
	// ==오퍼레이터와 동일한 구조
}
void RationalNumber::reduction() {
	int div = 2;
	while (this->denominator >= div) {
		if (this->denominator % div == 0 && this->numerator % div == 0) {
			this->denominator /= div;
			this->numerator /= div;
			// div로 둘다 나눠 떨어질 때까지 계속 확인하면서 약분
		}
		else
			div += 1;
		// 더 이상 둘다 나눠 떨어지지 않으면 div 에 1더해서 비교
		// div값이 분모를 넘어서면 둘다 더이상 약분이 불가능한 뜻이므로 반복문 탈출
	}
	return;
}
void RationalNumber::printRational() const {
	cout << numerator << "/" << denominator;
}// display rational number


// cout,cin 오퍼레이터 추가
std::ostream& operator<<(std::ostream& os,const RationalNumber& rational) {
	os << rational.numerator << "/" << rational.denominator;
	return os;
	// <<오퍼레이터 오버로딩
}
std::istream& operator>>(std::istream& is, RationalNumber& rational) {
	is >> rational.numerator;
	is >> rational.denominator;
	rational.reduction();
	return is;
	// >>오퍼레이터 오버로딩,입력한 후 약분
}