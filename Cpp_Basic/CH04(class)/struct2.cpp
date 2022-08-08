#include <iostream>
#include <string>
using namespace std;

#define NAME_LEN 20
#define SEX_LEN 10
#define JOB_LEN 10
#define CHARACTER_LEN 10

struct Chulsoo
{
	char name[NAME_LEN];
	char SEX[SEX_LEN];
	char job[JOB_LEN];
	char character[CHARACTER_LEN];
	bool isHuman;
	int age;

	void introduce();
	void eat(string food) { cout << food << endl; }
	void sleep();
	void drive(const char*destination) { cout << destination << endl; }
};

int main()
{
	Chulsoo cs = { "철수", "남성","작가","diligent",32,true };

	cs.drive("레스토랑");
	cs.eat("스테이크");

	return 0;
}