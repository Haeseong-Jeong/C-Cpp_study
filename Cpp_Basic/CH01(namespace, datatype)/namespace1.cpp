#include <iostream>
#include "header1.h"
#include "header2.h"
using namespace std;
using namespace square;
using namespace rectangle;

namespace BestComlmpl
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}

namespace ProgComlmpl
{
	void SimpleFunc(void)
	{	
		std::cout << "ProgCom이 정의한 함수" << std::endl;
	}
}


int val = 100;

int main()
{
	int val = 200;
	val += 20;
	::val += 20;//전역변수 불러올때 => ::변수명
	cout << "지역변수 Val + 20 : " << val << endl;
	cout << "전역변수 Val + 20 : " << ::val << endl;


	//cout << "Y1 : " << y1 << endl;
	//int y = x; 만약 같은 변수가 네임스페이스에 따라 값이 달라지면 변수에 네임스페이스 표기
	int y1 = square::x;
	int y2 = rectangle::x;

	cout << "Y1 : " << y1 << endl;
	cout << "Y2 : " << y2 << endl;

	//네임스페이스는 각각 다른 공간
	BestComlmpl::SimpleFunc();
	ProgComlmpl::SimpleFunc();
}
