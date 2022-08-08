#include "Intsample.h"

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