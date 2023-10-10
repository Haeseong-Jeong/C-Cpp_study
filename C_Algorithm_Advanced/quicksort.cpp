#include <iostream>

using namespace std;

int partition(int* array, int left, int right);


void deletedup(int* array, int len) {
	int* tmp = (int*)malloc(sizeof(int) * len);

}



void quicksort(int* array, int left, int right)
{
	if (left<right)
	{
		int pivot = partition(array, left, right);
		quicksort(array, left, pivot - 1);
		quicksort(array, pivot + 1,right);
	}
}

int partition(int* array, int left, int right)
{
	int pivot = right;
	int i = left;
	int j = right - 1;

	cout << "partition array = {";
	for (int i = left; i <= right; i++)
	{
		cout << array[i] << ", ";
	}
	cout << "}" << endl;

	while (1)
	{
		while (i < right && array[i] <= array[pivot])
		{
			i++;
		}
		while (j > left && array[j] >= array[pivot])
		{
			j--;
		}
		if (i < j) {
			cout << "¹Ù²Ü ¿ø¼Ò xx: " << array[j] << ", " << array[i] << endl;
			int tmp = array[j];
			array[j] = array[i];
			array[i] = tmp;
		}
		else {
			break;
		}
		
	}
	cout << "ÇÇ¹þ ±³È¯ : " << array[pivot] << ", " << array[i] << endl;
	int tmp = array[pivot];
	array[pivot] = array[i];
	array[i] = tmp;
	
	cout << "finish array =     {";
	for (int i = left; i <= right; i++)
	{
		cout << array[i] << ", ";
	}
	cout << "}" << endl;

	return i;
}




int main()
{
	int a[10] = { 5,5,6,7,12,1,10,34,10,5 };
	//int a[10] = { 9,15,6,7,12 };
	cout << "before array = {";
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << ", ";
	}
	cout << "}" << endl;
	quicksort(a,0, 9);

	cout << "after array = {";
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << ", ";
	}
	cout << "}" << endl;
	return 0;
}