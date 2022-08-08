#include <iostream>
using namespace std;

enum Days{Mon,Tue,Wed,Thu,Fri,Sat,Sun};

int main()
{
	int i;
	printf("input the date (0~6) :");
	scanf("%d", &i);

	if (i==Sun || i == Sat)
	{
		printf("Thanks GOD, it's holiday \n");
	}
	else
	{
		printf("Whoops! \n");
	}

	return 0;
}