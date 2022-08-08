#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

// 전역 변수 설정

int hour;
int minute;
int add;

//함수 만들기
//반환형 함수이름(변수)
void counter()
{
    minute = minute + add; //분 더하기
    hour = hour + (minute / 60); //더해진 분을 hour 에 더하기
    minute = minute % 60; //더하진 분의 나머지를 분으로 남기기
    hour = hour % 24; //
}

int main(void)
{
    printf("시를 입력하세요 : ");
    scanf("%d", &hour);
    printf("분을 입력하세요 : ");
    scanf("%d", &minute);
    printf("더할 분을 입력하세요 : ");
    scanf("%d", &add);
    counter();
    printf("더해진 시각은 %d시 %d분 입니다.", hour, minute);
}