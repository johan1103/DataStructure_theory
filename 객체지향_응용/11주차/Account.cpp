#include"Account.h"


Account::Account(double account) {
	set_account(account); //set 함수를 이용해서 재고 설정
}

void Account::debit(double input) {
	set_account(get_account() + input); //get_account와 input을 이용해서 다시 재고 설정
	// private을 써도 상관없지만 안정성을 위해 get함수 사용
}
void Account::credit(double output) {
	if (get_account() - output < 0) { //인출하려는 금액이 현재고 보다 많으면 error메세지 출력
		cout << "error!\n";
	}
	else
		set_account(get_account() - output); //인출금액이 현재고 보다 적으면 인출, set함수를 사용해 다시 설정
}
void Account::set_account(const double account) {
	account_balance = account;
}
double Account::get_account() {
	return account_balance;
}