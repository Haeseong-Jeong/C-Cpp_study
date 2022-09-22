#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CAPACITY 3
#define buffer_size 20

int capa = CAPACITY;

typedef struct
{
	char* name;
	char* number;
	char* email;
	char* group;
}person;

person *book;

void init_book(person* b)
{
	book = (person*)malloc(sizeof(person) * capa);
}

void reallocate()
{
	person* newbook;
	capa = capa * 2;
	newbook = (person*)malloc(sizeof(person) * capa);
	memset(newbook, NULL, sizeof(newbook));
	for (int i = 0; i < n; i++)
	{
		newbook[i] = book[i];
	}
	free(book);
}

int main()
{
	init_book(book);
	
	book[0]->name = "hello";
	book[0]->number = "sam";
	book[0]->email = "nice";
	book[0]->group = "sora";

	printf("%s\n", book[0]->name);
	printf("%s\n", book[0]->number);
	printf("%s\n", book[0]->email);
	printf("%s\n", book[0]->group);


	return 0;

}