#pragma once
#ifndef CHECKING_ACCOUNT
#define CHECKING_ACCOUNT
#include"Account.h"

class CheckingAccount:public Account {
public:
	CheckingAccount(const double account, const double fee); //Account를 상속받고 수수료 데이터멤버를 추가
	void set_transaction(double fee); //수수료 설정 함수
	double get_transaction(); //수수료 반환 함수
	void credit(double output); // 인출할 돈에 수수료를 붙여야 하므로 함수 오버라이딩
private:
	double transaction; //상속받은 멤버들 이외에 사용할 수수료 멤버변수 추가
};

#endif // !CHECKING_ACCOUNT
