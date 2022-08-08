#include <stdio.h>

int main()
{
	//1. 메모리 할당(변수 선언)
	int i, sum = 0;
	int start, end, temp;

	//2. data 입력 
	printf(" Start : ");
	scanf("%d", &start);
	printf(" End : ");
	scanf("%d", &end);

	if (start > end)
	{
		temp = start;
		start = end;
		end = temp;
	}

	//3. process 처리
	for ( i = start; i <= end; i++)
	{
		sum += i;
		if (sum > 3000)
			break;
	}

	//4. 출력
	if (i-1 == end)
	{
		printf(" %d ~ %d 의 합 = %d \n", start, end, sum);
	}
	else
	{
		printf(" %d ~ %d 의 합 = %d \n", start, i, sum);
	}

	return 0;
}