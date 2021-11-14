#include <iostream>
using namespace std;
class NUMBOX
{
private:
	int num1, num2;
public:
	NUMBOX(int num1, int num2) : num1(num1), num2(num2) { }
	void ShowNumber()
	{
		cout << "num1: " << num1 << ", num2: " << num2 << endl;
	}
	NUMBOX(const NUMBOX& a) {
		this->num1 = a.num1;
		this->num2 = a.num2;
	}
	NUMBOX operator+(NUMBOX ref)
	{
		NUMBOX tmp(0, 0);
		cout << "tmp: " << tmp.num1 << " " << tmp.num2 << "\n";
		tmp.num1=this->num1 + ref.num1;
		tmp.num2 = this->num2 + ref.num2;
		return tmp;
	}
	NUMBOX& operator=(NUMBOX ref) {
		this->num1 = ref.num1;
		this->num2 = ref.num2;
		return *this;
	}
};
int main()
{
	NUMBOX nb1(10, 20);
	NUMBOX nb2(5, 2);
	NUMBOX nb3(1, 1);
	NUMBOX result(nb1 + nb2);
	(nb2 = nb1 + nb1) = nb3;
	nb1.ShowNumber();
	nb2.ShowNumber();
	nb3.ShowNumber();
	result.ShowNumber();
}