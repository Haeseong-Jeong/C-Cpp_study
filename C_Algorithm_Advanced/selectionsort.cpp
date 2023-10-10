#include <iostream>

using namespace std;
//array[], *array, array[10], array[0]으로 넘겼을 때 모두 같은 결과

void selectionsort(int* array, int n)
{
	int tmp = 0;
	for (int i = 0; i < n; i++)
	{
		int maxidx = 0;
		for (int j = 1; j < n - i; j++)
		{
			if (array[j] > array[maxidx])
			{
				maxidx = j;
			}
		}
		tmp = array[n - i - 1];
		array[n - i - 1] = array[maxidx];
		array[maxidx] = tmp;
	}
}



int main()
{
	int a[10] = { 5,52,6,7,12,1,10,34,100,42 };

	for (int i = 0; i < 10; i++)
	{
		cout << "before a[" << i << "] = " << a[i] << endl;
	}
	selectionsort(a, 10);

	for (int i = 0; i < 10; i++)
	{
		cout << "after a[" << i << "] = " << a[i] << endl;
	}

	return 0;
}