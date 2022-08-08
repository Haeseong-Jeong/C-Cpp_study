#include <iostream>
using namespace std;

class Restaurant
{
public:
	int steak;
};

class Chulsoo
{
public:
	//int Eat(int &steaknum) -> 스테이크 값이 바뀐다.
	int Eat(int steaknum)
	{
		steaknum = 10000;// "철수가 먹은 스테이크"
		cout << "철수는 먹는다." << endl;
		return steaknum;
	}
};

int main()
{
	Chulsoo cs;
	Restaurant rts;

	//레스토랑에서 철수에게 준 스테이크 가격은 20000
	rts.steak = 20000;
	cout << "철수는" << cs.Eat(rts.steak) << "원으로 먹는다고 거짓말을 했다." << endl;

	//int &steaknum일경우 10000원출력 / rts.steak = 20000 -> 10000;
	cout << "레스토랑은" << rts.steak << "원으로 스테이크를 철수에게 주었다." << endl;

	return 0;

}