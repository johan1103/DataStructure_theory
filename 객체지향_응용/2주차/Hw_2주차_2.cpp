#include<iostream>
#include<string>
using namespace std;

class Invoice {
private:
	string number;
	string description;
	int item_price;
	int item_amount;
	int invoice_amount;
public:
	//생성자
	Invoice(string num = "", string des = "", int price = 0, int amount = 0) {
		number = num;
		description = des;
		item_price = price;
		if (amount < 0) {
			cout << "error! (wrong value)\n";
			item_amount = 0;
		}
		else
			item_amount = amount;
	}
	// 생성자 오버로드
	Invoice() {
		number = "";
		description = "";
		item_amount = 0;
		item_price = 0;
	}
	// 각 private 값들 재설정
	void set_number(string num) {
		number = num;
	}
	void set_description(string des) {
		description = des;
	}
	void set_item_price(int price) {
		item_price = price;
	}
	void set_item_amount(int amount) {
		if (amount < 0) {
			cout << "error! (wrong value)\n";
			item_amount = 0;
		}
		else
			item_amount = amount;
	}
	// 품목, 총액 return
	string get_description() {
		return description;
	}
	int get_invoice_amount(){
		invoice_amount = item_price * item_amount;
		return invoice_amount;
	}
};

int main() {
	Invoice Hammer("12345", "hammer", 50, 5);
	cout <<"1st Invoice : "<<Hammer.get_description()<<" "<<Hammer.get_invoice_amount() << "\n";
	Invoice Saw("67885", "saw", 200, 2);
	cout << "2nd Invoice : " << Saw.get_description() << " " << Saw.get_invoice_amount() << "\n";
	Saw.set_item_price(250);
	cout << "change price(2nd) : " << Saw.get_description() << " " << Saw.get_invoice_amount() << "\n";
	Invoice Book("11132", "book", 300, -4);
	Book.set_item_amount(4);
	cout << "3rd Invoice : " << Book.get_description() << " " << Book.get_invoice_amount() << "\n";
	return 0;
}