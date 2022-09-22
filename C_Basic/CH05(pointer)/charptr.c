#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 3

//문자열에서 포인터와 배열주소의 차이점 알아야한다.? 
// 어떤 str 함수에서 문자열의 포인터 변수 값을 입력(반환)하는지, 시작주소를 입력(반환)하는지
int main()
{
	//char alpa[5] = "abcd";//이거 문자열이야.. 문자배열의 이름은 그 배열의 시작주소
	//	//여기는 배열 포인터
	//printf("%c\n", alpa[0]);
	//printf("%c\n", alpa[1]);
	//printf("%c\n", alpa[2]);
	//printf("%c\n", alpa[3]);
	//printf("%c\n", alpa[4]);

	//char* str = (char*)malloc(sizeof(char) * 3); // 이건 문자열(문자배열)이야...
	// 		//여기도 배열 포인터
	//str[0] = 'w';
	//str[1] = 'd';
	//str[2] = 'z';
	//
	//printf("%c\n", str[0]);
	//printf("%c\n", str[1]);
	//printf("%c\n", str[2]);

	//free(str);


	char** str = (char**)malloc(3* sizeof(char*)); // 이건 문자열 배열이야...
				//여기도 배열 포인터
	str[0] = "hello";
	str[1] = "sam";
	str[2] = "fuck";
	//str[3] = "kkkk"; //-> 에러

	printf("%s\n", str[0]);
	printf("%s\n", str[1]);
	printf("%s\n", str[2]);
	//printf("%s\n", str[3]); // -> 에러

	free(str);


	char* ptr[3] = { "hello","free","str" };//이건 포인터 배열이야..
	
	printf("%s\n", ptr[0]);
	printf("%s\n", ptr[1]);
	printf("%s\n", ptr[2]);

	return 0;
}