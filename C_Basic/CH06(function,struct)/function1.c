#include <stdio.h>  //입출력과 관련된 함수 정보를 제공
//#은 전처리문(;으로 끝나면 안됌)

//return type 함수명 (parameter)
fucnA()
{
	printf("funcA() start. \n");
	printf("funcA() end.\n");
}

int main() //main 함수는 자동으로 실행하는 진입점 함수
{
	printf("main() start. \n");
	fucnA(); // 함수호출
	printf("main() end. \n");

	return 0;
}

