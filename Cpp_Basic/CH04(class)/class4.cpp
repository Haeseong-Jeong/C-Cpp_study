#include <iostream>
#include <string>
using namespace std;

#define NAME_LEN 20
#define SEX_LEN 10
#define JOB_LEN 20
#define CHARACTER_LEN 20

struct Chulsoo
{
private:
	char name[NAME_LEN];
	char sex[SEX_LEN];
	char job[JOB_LEN];
	char character[CHARACTER_LEN];
	int age;
	bool marrige;
	
public:
	void introduce()
	{
		cout << "이름 : " << name << endl;
		cout << "성별 : " << sex << endl;
		cout << "직업 : " << job << endl;
		cout << "성격 : " << character << endl;
		cout << "나이 : " << age << endl;
		cout << "결혼 여부 : " << (marrige ? "yes" : "no") << endl;
	}

	void eat(const char* food)
	{
		cout << "철수는" << food << "(을)를 먹는다" << endl;
	}

	void sleep()
	{
		cout << "철수는 잔다." << endl;
	}
	void drive(const char* destination)
	{
		cout << "철수는" << destination << "에 간다" << endl;
	}
	void wirte()
	{
		cout << "철수는 책을 쓴다." << endl;
	}
	void read()
	{
		cout << "철수는 책을 읽는다." << endl;
	}
	void constructor(const char* name, const char* sex, const char* job, 
		const char* character, int age, bool marragie)
	{
		strcpy_s(this->name, name);
		strcpy_s(this->sex, sex);
		strcpy_s(this->job, job);
		strcpy_s(this->character, character);
		this->age = age;
		this->marrige = marrige;
	}
};

struct Younghee
{
private:
	char name[NAME_LEN];
	char sex[SEX_LEN];
	char job[JOB_LEN];
	char character[CHARACTER_LEN];
	int age;
	bool marrige;

public:
	void introduce()
	{
		cout << "이름 : " << name << endl;
		cout << "성별 : " << sex << endl;
		cout << "직업 : " << job << endl;
		cout << "성격 : " << character << endl;
		cout << "나이 : " << age << endl;
		cout << "결혼 여부 : " << (marrige ? "yes" : "no") << endl;
	}

	void eat(const char* food)
	{
		cout << "영희는" << food << "(을)를 먹는다" << endl;
	}

	void sleep()
	{
		cout << "영희는 잔다." << endl;
	}
	void drive(const char* destination)
	{
		cout << "영희는" << destination << "에 간다" << endl;
	}
	void wirte()
	{
		cout << "영희는 책을 쓴다." << endl;
	}
	void read()
	{
		cout << "영희는 책을 읽는다." << endl;
	}
	void shopping()
	{
		cout << "영희는 쇼핑한다." << endl;
	}
	void constructor(const char* name, const char* sex, const char* job,
		const char* character, int age, bool marragie)
	{
		strcpy_s(this->name, name);
		strcpy_s(this->sex, sex);
		strcpy_s(this->job, job);
		strcpy_s(this->character, character);
		this->age = age;
		this->marrige = marrige;
	}
};

int main()
{
	Chulsoo cs;
	Younghee yh;

	cs.constructor("철수", "남성", "작가", "diligent", 32, true);
	yh.constructor("영희", "여성", "주부", "diligent", 38, true);
	cs.eat("스테이크");

	return 0;
}