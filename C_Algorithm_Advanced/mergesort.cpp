#include <iostream>

using namespace std;
//array[], *array, array[10], array[0]으로 넘겼을 때 모두 같은 결과
void mergesort(int* array, int first, int last);
void merge(int* array, int first, int last);

void mergesort(int* array, int first, int last)
{
	if (first< last)
	{
		int mid = (first + last) / 2;
		mergesort(array, first, mid);
		mergesort(array, mid + 1, last);
		merge(array, first, last);
	}
}

void merge(int* array,int first, int last)
{
	int mid = (first + last) / 2;
	int i = first;
	int j = mid + 1;
	int tmp[20] = { 0, };
	int tmpidx = 0;

	while (i <= mid && j <= last)
	{
		if (array[i] <= array[j])
		{
			tmp[tmpidx] = array[i];
			tmpidx++;
			i++;
		}
		else
		{
			tmp[tmpidx] = array[j];
			tmpidx++;
			j++;
		}
	}

	for (int k = i; k < mid+1; k++)
	{
		tmp[tmpidx] = array[k];
		tmpidx++;
	}

	for (int k = j; k < last+1; k++)
	{
		tmp[tmpidx] = array[k];
		tmpidx++;
	}

	for (int x = first; x < last+1; x++)
	{
		array[x] = tmp[x - first];
	}
}




int main()
{
	//int a[10] = { 5,52,6,7,12,1,10,34,100,42 };
	int b[4] = { 5, 2, 1, 10 };
	//int c[2] = { 40,12 };
	for (int i = 0; i < 4; i++)
	{
		cout << "before a[" << i << "] = " << b[i] << endl;
	}
	//mergesort(a, 0,9);
	mergesort(b, 0, 3);
	for (int i = 0; i < 4; i++)
	{
		cout << "after a[" << i << "] = " << b[i] << endl;
	}

	return 0;
}