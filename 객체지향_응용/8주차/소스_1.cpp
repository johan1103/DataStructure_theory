#include<iostream>
using namespace std;

class date {
public:
	date() {
		cout << "date con\n";
	}
	~date() {
		cout << "date dest\n";
	}
private:
};
class employee {
public:
	employee() {
		cout << "emp con\n";
	}
	~employee(){
		cout << "emp dest\n";
	}
private:
	date d;
};

int main() {
	employee e_1;
}