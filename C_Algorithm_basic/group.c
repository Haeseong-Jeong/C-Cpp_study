#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

/* 문자 정렬 
char str1[] = “BlockDMask”; 

char str2[] = “BlockDMask”; 

strcmp(str1, str2);             // 문자열이 같으므로 0 

strcmp(str1, BlockFMask”);      // D < F 이므로 음수 반환

strcmp(str1, BlockAMask”);      // D > A 이므로 양수 반환
*/

struct Record
{
    char Name[10];
    int quantity;
};

int main()
{
    //[1] 기본 셋팅
    struct Record recodes[] =
    {
        { "AC", 4 },
        { "DVD", 4 },
        { "TV", 3 },
        { "Radio", 3 },
        { "TV", 1 },
        { "AC", 1 },
        { "DVD", 2 },
        { "Radio", 2 },
    };

    int N = sizeof(recodes) / sizeof(recodes[0]);
    
    struct Record groups[N] = 
    {
        { "", 0 },
    };
    
    printf(" [1-1] 원본 데이터 : \n");
    for (int d = 0; d < N; d++)
    {
        printf("%6s - %d\n" , recodes[d].Name, recodes[d].quantity);
    }


    // Name 기준으로 sort(정렬)
    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if (strcmp(recodes[i].Name, recodes[j].Name) > 0) // 문자크기가 i > j 라면(양수)
            {
                // j -> i 순서로 바꿔라
                struct Record temp; // Record 구조로 변수 생성 ({name},{quantity})
                temp = recodes[i];
                recodes[i] = recodes[j];
                recodes[j] = temp;    
            }
        }
    }

/*
    int ri = 0; // recodes의 인덱스
    int gi = 0; // groups의 인덱스
    while (ri<(N))
    {
        if (strcmp(recodes[ri].Name, recodes[ri+1].Name) == 0) // recodes.name이 뒤에 name과 같다면
        {
            strcpy_s(groups[gi].Name, recodes[ri].Name); // group name에 recodes name 복사
            groups[gi].quantity = recodes[ri].quantity + recodes[ri+1].quantity; // quantity 누적
            ri=ri+2; // 같은 구간 점프
            gi++; // group index 1 증가
        }
        else // 같지 않다면
        {
            groups[gi] = recodes[ri]; // 그대로 복사
            ri++;
            gi++;
        }
    }
    
*/
    int groupcount = 0; //group의 인덱스?
    int subtotal = 0; // quantity 담는 그릇

    for (int x = 0; x < N; x++)
    {
        subtotal += recodes[x].quantity; // 같은 Name의 수량 더하기
        if ((x+1) == N || strcmp(recodes[x].Name, recodes[x+1].Name) != 0)
        // i 가 N보다 작거나 or  name이 뒤에 name과 같지 않으면
        {
            strcpy_s(groups[groupcount].Name, recodes[x].Name); //group에 name 복사
            groups[groupcount].quantity = subtotal; // subtotal을 group quantity에 복사
            groupcount++; //group 인덱스 + 1
            subtotal=0; //quantity 초기화
        }
    }


    printf(" [1-2] 정렬 후 데이터 : \n");
    for (int d = 0; d < N; d++)
    {
        printf("%6s - %d\n" , recodes[d].Name, recodes[d].quantity);
    }

    printf(" [2] 데이터 그룹화 : \n");
    for (int i = 0; i < groupcount; i++)
    {
        printf("%6s - %d\n" , groups[i].Name, groups[i].quantity);
    }
}