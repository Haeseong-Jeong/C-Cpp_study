#include <iostream>
using namespace std;

void add(int& ref);
void ref_swap(int& x, int& y);
void pointer_swap(int* x, int* y);

int main()
{
	int x = 10;
	int y = 50;

	//add(x);
	//cout << "[after add] x = " << x << endl;
	
	ref_swap(x, y);
	printf("[after ref] x : %d, y : %d \n", x, y);
	
	pointer_swap(&x, &y);
	printf("[after pointer] x : %d, y : %d\n", x, y);
	
	return 0;
}

void ref_add(int& x)
{
	x++;
}

void ref_swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void pointer_swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}