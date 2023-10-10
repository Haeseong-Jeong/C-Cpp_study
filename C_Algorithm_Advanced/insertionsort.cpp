#include <iostream>

using namespace std;
//array[], *array, array[10], array[0]으로 넘겼을 때 모두 같은 결과

void insertion(int* array, int n)
{
	for (int i = 1; i < n; i++)
	{
		int tmp = array[i];
		for (int j = i; j > 0; j--)
		{
			if (tmp < array[j-1])
			{
				array[j] = array[j-1];
			}
			else
			{
				array[j] = tmp;
				break;
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
	insertion(a, 10);

	for (int i = 0; i < 10; i++)
	{
		cout << "after a[" << i << "] = " << a[i] << endl;
	}

	return 0;
}