#include"CheckingAccount.h"


CheckingAccount::CheckingAccount(const double account, const double fee) :Account(account) {
	set_transaction(fee); //Account클래스에 account값 넣어줘서 초기화기 사용해서 생성자 호출, set함수로 수수료 설정
}
void CheckingAccount::set_transaction(double fee) {
	transaction = fee;
}
double CheckingAccount::get_transaction() {
	return transaction;
}
void CheckingAccount::credit(double output) {
	Account::credit(output + transaction); //기존 credit이 수수료 + 인출금액을 인자로 받는 새로운 credit 오버라이딩
}