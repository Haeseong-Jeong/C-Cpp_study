#include <stdio.h>
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����

struct NODE {    // ���� ����Ʈ�� ��� ����ü
    struct NODE* next;    // ���� ����� �ּҸ� ������ ������
    int data;             // �����͸� ������ ���
};

void addFirst(struct NODE* target, int data)    // ���� ��� �ڿ� ��带 �߰��ϴ� �Լ�
{
    struct NODE* newNode = malloc(sizeof(struct NODE));    // �� ��� ����
    newNode->next = target->next;    // �� ����� ���� ��忡 ���� ����� ���� ��带 ����
    newNode->data = data;            // ������ ����

    target->next = newNode;    // ���� ����� ���� ��忡 �� ��带 ����
}

void Make_head()    // ���� ��� �ڿ� ��带 �߰��ϴ� �Լ�
{
    struct NODE* head = malloc(sizeof(struct NODE));    // �� ��� ����
    head->next = NULL;    // �� ����� ���� ��忡 ���� ����� ���� ��带 ����
    head->data = NULL;            // ������ ����
   // ���� ����� ���� ��忡 �� ��带 ����
}