#ifndef  _INTSAMPLE_H_
#define _INTSAMPLE_H_
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

#endif
