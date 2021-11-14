#include"SavingAccount.h"


SavingAccount::SavingAccount(const double account, const double interest) :Account(account) {
	set_interest(interest); //초기화기로 Account생성자 호출 후 이자율 설정함수 호출
}
double SavingAccount::calculate_interest() {
	return get_account() * get_interest(); //get함수로 각각 계좌,이자율 받아서 곱한값 return (return값= 이자)
}
void SavingAccount::set_interest(const double itr) {
	interest = itr; //이자율 설정함수
}
double SavingAccount::get_interest() {
	return interest;
}