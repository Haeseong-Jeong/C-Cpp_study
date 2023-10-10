#include <iostream>

using namespace std;
//array[], *array, array[10], array[0]으로 넘겼을 때 모두 같은 결과

void BubbleSort(int* array, int n)
{
	/*while (n != 1)
	{
		for (int i = 0; i < n-1; i++)
		{
			if (array[i] > array[i+1])
			{
				int tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
			}
		}
		n = n - 1;
	}*/

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				int tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;
			}
		}
	}
}





int main()
{
	int a[10] = { 5,52,6,7,12,1,10,34,100,42 };
	
	for (int i = 0; i < 10; i++)
	{
		cout << "before a[" << i << "] = " << a[i] << endl;
	}
	BubbleSort(a, 10);

	for (int i = 0; i < 10; i++)
	{
		cout << "after a[" << i << "] = " << a[i] << endl;
	}
	
	return 0;
}