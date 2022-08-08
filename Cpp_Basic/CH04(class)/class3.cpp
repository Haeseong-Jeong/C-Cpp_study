#include <iostream>
using namespace std;

class Intsample
{
public:
	void Showscore();
	void Setscore(const int s);
	int getscore();

private:
	int score;
};

void Intsample::Showscore()
{
	//cout << "점수 : " << this->getscore() << endl;
	cout << "점수 : " << score << endl;
}

void Intsample::Setscore(const int s)
{
	score = s;
}

int Intsample::getscore()
{
	return score;
}

int main()
{
	Intsample obj;

	obj.Setscore(100);
	cout << "점수 : " << obj.getscore() << endl;

	return 0;
}