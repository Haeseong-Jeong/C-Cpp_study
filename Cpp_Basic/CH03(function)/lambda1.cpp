#include <iostream>
#include <string>
using namespace std;

int main()
{
	//[=] call by value [&] call by reference
	[] {cout << "lambda" << endl; }();
	[](int x, int y) {cout <<"합은 = " << x + y << endl; }(2, 3);//x에2 y에3을 대입하여 코드 실행
	int k = [](int x, int y)->int {return x + y; }(5, 3);//매개변수 x,y의 합을 리턴하는 람다 작성
	cout << "합은 = " << k << endl;

	int i = 20;
	int n = 10;
	//[=] mutable {cout << "i : " << ++i <<endl; }(); call by value 하려면 mutable 붙여...
	[&]() {cout << "i : " << ++i << endl; }();
	cout << "[after lambda] i :" << i << endl;
	cout << [n](int x)->int {return n + x; }(20) << endl;

	auto love = [](string a, string b) {cout << a << "보다 " << b << "(이)가 좋아" << endl; };
	love("돈", "너");
	love("피자", "치킨");

	return 0;
}