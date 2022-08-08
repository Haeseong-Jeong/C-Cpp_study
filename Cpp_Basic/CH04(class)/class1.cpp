#include <iostream>
using namespace std;


class Chulsoo
{
	
public:
	//내부에 함수 선언
	int age = 28;

	int height(int height = 189);//디폴트 매개변수

	void Eat()
	{
		cout << "철수는 먹는다" << endl;
	}
	void Sleep()
	{
		cout << "철수는 잔다" << endl;
	}
	
	void Study();


};

//외부에 함수 선언
void Chulsoo::Study()
{
	cout << "철수는 공부 한다" << endl;
}

int Chulsoo::height(int x)
{
	cout << "철수의 키는" << x << endl;
	return x;
}



int main()
{
	Chulsoo cs;
	cs.Eat();
	cs.Sleep();
	cout<<cs.age<<endl;
	cs.age = 20;
	cout << cs.age << endl;

	cs.height();
	return 0;
}