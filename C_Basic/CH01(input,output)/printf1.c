#include <stdio.h>

int main()
{
    printf("%d \n",555);
    //printf("%d \t", 555); = printf("%d%c", 555,9);
    printf("/%d/ \n",555);
    printf("/%10d/ \n",555);//����������
    printf("/%-10d/ \n",555);//��������
    printf("/%010d/ \n\n",555);//�տ�0���� ä���

    printf("/%f/ \n",8192.1978);
    printf("/%13f/ \n",8192.1978);
    printf("/%*.*f/ \n",13,2,8192.1978);//(*.*) => (13.2)
    printf("/%13.2f/ \n",8192.1978);//13�ڸ��߿� 2�ڸ��� �Ҽ��� (3�ڸ����� �ݿø�)
    printf("/%-13.2f/ \n\n",8192.1978);

    printf("%c %d %c %d \n",'A','A',97,97);
    printf("%s \n", "C Language...");
    printf("%5s\n", "C Language...");
    printf("%.5s \n\n", "C Language...");

    printf("%d %o %x \n",67,67,67);
    printf("%d %#o %#x \n",067,067,067);//8���� #�� ����ǥ���̴�.
    printf("%d %#o %#x \n",0x67,0x67,0x67);//16����
	printf("%x, %#10x, %#010x \n\n", 0x1234, 0x1234, 0x1234); 

	 return 0 ;
}
