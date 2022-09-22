#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void str_copy(char* str, char* strcopy);

void getstdin(FILE *fp, char* str)
{
	int ch = 0; int i = 0;

	while ((ch = fgetc(fp)) != '\n' && ch != EOF)
	{
		str[i++] = ch;
	}
	str[i] = '\0';
}

void str_copy2(char*buff, char*namestr)
{
	
	//strcat(namestr, buff);
	char* ptr;
	while ((ptr = strtok(NULL, " ")) != NULL)
	{
		strcat(namestr, ptr);
	}
}


void str_copy(char* str,char*strcopy)
{
	int idx = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] != ' ')
		{
			strcopy[idx++] = str[i];
		}
	}
	printf("%s\n", str);
	printf("%s\n", strcopy);
}



int main()
{
	char str[50];
	char strcopy[50] = { NULL };
	char* ptr;
	char* ptrr;

	getstdin(stdin,str);//add skl il

	ptr = strtok(str, " "); //add
	
	ptrr = strtok(NULL, "\n");

	printf("%s\n", ptrr);
	int idx = 0;
	for (int i = 0; i < strlen(ptrr); i++)
	{
		if (ptrr[i] != ' ')
		{
			strcopy[idx++] = ptrr[i];
		}
		
	}

	printf("%s\n", str);
	printf("%s\n", strcopy);

	return 0;
}
