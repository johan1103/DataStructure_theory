#include<iostream>
using namespace std;

class bank_account {
private:
	// 현 재고
	int current_balance;
public:
	// 생성자
	bank_account(int initial_balance) {
		current_balance = initial_balance;
	}
	// 생성자 오버로드 -> 인수를 주지 않았을 때의 디폴트 값
	bank_account() {
		current_balance = 0;
	}
	// 현 재고 재입력
	void set_initial_balance(int initial_balance) {
		if (initial_balance < 0) {
			cout << "error! (wrong value)\n";
			current_balance = 0;
		}
		else {
			current_balance = initial_balance;
		}
		return;
	}
	// 돈을 int 형으로 받고, 재고에 추가 & 받은 돈이 0보다 작으면 작동 X
	void credit(int given_money) {
		if (given_money <= 0)
			cout << "error! (wrong value)\n";
		else {
			current_balance += given_money;
		}
		return;
	}
	// 인출할 돈을 int 형으로 받고, 재고에서 삭감 & 재고보다 인출할 돈이 많으면 작동X
	void debit(int withdraw_money) {
		if (withdraw_money > current_balance) {
			cout << "Debit amount exceeded account balance.\n";
		}
		else {
			current_balance -= withdraw_money;
		}
	}
	// 현재고 출력
	int get_current_balance() {
		return current_balance;
	}
};

int main() {
	// 계좌 2개 선언, 첫번째의 재고는 0, 두번째 재고는 10으로 생성자에 의해 설정됨
	bank_account account_1;
	bank_account account_2(10);
	// 설정 함수를 통해 각각 50,35로 재고 재설정
	cout << "account_1 balance = 50\n";
	account_1.set_initial_balance(50);
	cout << "account_2 balance = 35\n";
	account_2.set_initial_balance(35);
	// 60, 20 인출 60은 재고를 넘는 값이므로 인출되지 않음
	cout << "1's withdraw 60\n";
	account_1.debit(60);
	cout << "1's withdraw 20\n";
	account_1.debit(20);
	// 현재고 출력
	cout << "account1's current balance: " << account_1.get_current_balance() << "\n";
	cout << "2's credit 20\n";
	cout << "account2's current balance: " << account_2.get_current_balance() << "\n";

	return 0;
}