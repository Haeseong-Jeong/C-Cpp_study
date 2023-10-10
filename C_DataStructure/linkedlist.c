#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

struct NODE {    // 연결 리스트의 노드 구조체
    struct NODE* next;    // 다음 노드의 주소를 저장할 포인터
    int data;             // 데이터를 저장할 멤버
};

void addFirst(struct NODE* target, int data)    // 기준 노드 뒤에 노드를 추가하는 함수
{
    struct NODE* newNode = malloc(sizeof(struct NODE));    // 새 노드 생성
    newNode->next = target->next;    // 새 노드의 다음 노드에 기준 노드의 다음 노드를 지정
    newNode->data = data;            // 데이터 저장

    target->next = newNode;    // 기준 노드의 다음 노드에 새 노드를 지정
}

void Make_head()    // 기준 노드 뒤에 노드를 추가하는 함수
{
    struct NODE* head = malloc(sizeof(struct NODE));    // 새 노드 생성
    head->next = NULL;    // 새 노드의 다음 노드에 기준 노드의 다음 노드를 지정
    head->data = NULL;            // 데이터 저장
   // 기준 노드의 다음 노드에 새 노드를 지정
}