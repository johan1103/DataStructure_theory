#include<iostream>
using std::cout;
using std::cin;

class Count {
	friend void setX(Count&, int);
public:
	Count() :x(0) {

	}
	void print()const {
		cout << x << "\n";
	}
private:
	int x;
};

void setX(Count& c, int val) {
	c.x = val;
}
int main() {
	Count counter;
	cout << "counter.x after instantiation: ";
	counter.print();

	setX(counter, 8);
	cout << "counter.x after call setX func: ";
	counter.print();
	return 0;
}