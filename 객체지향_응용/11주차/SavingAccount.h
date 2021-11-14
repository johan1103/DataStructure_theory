#pragma once
#ifndef SAVING_ACCOUNT
#define SAVING_ACCOUNT

#include"Account.h"

class SavingAccount :public Account {
public:
	SavingAccount(const double account, const double itr); //account를 상속 받고 이자율 데이터 멤버를 추가
	double calculate_interest(); //현재 받는 이자 계산
	void set_interest(const double itr); //이자율 설정 함수
	double get_interest();
private:
	double interest;
};

#endif // !SAVING_ACCOUNT
