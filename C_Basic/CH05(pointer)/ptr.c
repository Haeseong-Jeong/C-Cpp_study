#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 3


//문자열에서 포인터와 배열주소의 차이점 알아야한다.? 
// 어떤 str 함수에서 문자열의 포인터 변수 값을 입력(반환)하는지, 시작주소를 입력(반환)하는지
int main()
{
	//char arr1[10] = "Hello";
	//
	//char* ptr1 = arr1;//문자열은 char의 배열, 배열이름은 배열의 시작주소
	//char* ptr2 = strdup(arr1); //strdup 는 주소를 돌려준다
	//char* ptr3 = "World"; //문자열

	//printf("%s\n", arr1);
	//printf("%s\n", ptr1);
	//printf("%s\n", ptr2);
	//printf("%s\n", ptr3);

	//*******************************v.2**************************************//

	/*char* arr2[3] = { "jack","sam","paul" };

	printf("%s\n", arr2[0]);
	printf("%s\n", arr2[1]);
	printf("%s\n", arr2[2]);

	char* arr3[3];

	arr3[0] = arr2[0];
	arr3[1] = "han";
	arr3[2] = "sora";
	

	printf("%s\n", arr3[0]);
	printf("%s\n", arr3[1]);
	printf("%s\n", arr3[2]);*/

	//*******************************v.3**************************************//
	
	char** str = (char**)malloc(sizeof(char*) * 3);
	str[0] = (char*)malloc(sizeof(char) * 5);
	str[1] = (char*)malloc(sizeof(char) * 4);
	str[2] = (char*)malloc(sizeof(char) * 3);

	char ch[5] = "hi";
	//strcpy(str[0], "abcd");
	str[0][0] = "abcd";
	//strcpy(str[1], "efg");
	strcpy(str[1], ch);
	//strcpy(str[2], "hi");
	str[2] = strdup(ch);

	printf("%s\n", str[0][0]);
	printf("%s\n", str[1]);
	printf("%s\n", str[2]);

	free(str[0]);
	free(str[1]);
	free(str[2]);
	free(str);
	
	
	return 0;
}