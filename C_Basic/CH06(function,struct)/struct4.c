#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CAPACITY 100
#define buffer_size 20

typedef struct
{
	char* name;
	char* number;
	char* email;
	char* group;
}person;

person book[_CAPACITY];

int main()
{
	book[0].name = "dad";
	book[0].number = "03942";
	book[0].email = "dssd@naver.com";
	book[0].group = "familly";

	/*book->name = 'd';
	book->number = 'c';
	book->email = 'a';
	book->group = 'e';*/

	printf("%s\n", book[0].name);
	printf("%s\n", book[0].number);
	printf("%s\n", book[0].email);
	printf("%s\n", book[0].group);
	

	char name[39] = "print name sam";

	char* p = strtok(name, " ");
	printf("%s\n", p);
	char* p2 = strtok(NULL, "\n");
	printf("%s\n", p2);

	return 0;

}