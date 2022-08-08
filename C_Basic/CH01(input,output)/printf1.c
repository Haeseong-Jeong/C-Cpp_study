#include <stdio.h>

int main()
{
    printf("%d \n",555);
    //printf("%d \t", 555); = printf("%d%c", 555,9);
    printf("/%d/ \n",555);
    printf("/%10d/ \n",555);//오른쪽정렬
    printf("/%-10d/ \n",555);//왼쪽정렬
    printf("/%010d/ \n\n",555);//앞에0으로 채우기

    printf("/%f/ \n",8192.1978);
    printf("/%13f/ \n",8192.1978);
    printf("/%*.*f/ \n",13,2,8192.1978);//(*.*) => (13.2)
    printf("/%13.2f/ \n",8192.1978);//13자리중에 2자리는 소수점 (3자리에서 반올림)
    printf("/%-13.2f/ \n\n",8192.1978);

    printf("%c %d %c %d \n",'A','A',97,97);
    printf("%s \n", "C Language...");
    printf("%5s\n", "C Language...");
    printf("%.5s \n\n", "C Language...");

    printf("%d %o %x \n",67,67,67);
    printf("%d %#o %#x \n",067,067,067);//8진수 #은 진법표현이다.
    printf("%d %#o %#x \n",0x67,0x67,0x67);//16진수
	printf("%x, %#10x, %#010x \n\n", 0x1234, 0x1234, 0x1234); 

	 return 0 ;
}

