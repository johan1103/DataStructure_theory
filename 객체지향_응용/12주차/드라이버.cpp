#include"TwoDayPackage.h"
#include"OvernightPackage.h";
using std::cin;

int main() {
	// 각각 클래스변수 안의 내용 print_package함수 사용해서 출력
	TwoDayPackage p_1("kim", "joe", "45-5", "96-4", "seoul", "busan", "arrived", "arrived"
		, 12181760, 12132921, 58.8, 100, 4000);
	cout << "p_1 information \n";
	p_1.print_package();

	OvernightPackage p_2("Lee", "Kwon", "452-5", "40-1", "incheon", "jeju", "arrived", "arrived"
		, 12181230, 21213235, 27.8, 1000, 5000);
	cout << "\n\np_2 information \n";
	p_2.print_package();
	return 0;
}