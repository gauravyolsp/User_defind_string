#include <stdio.h>

char *MyStrset(char *, char);

int main()
{
	char chChar;
	char szStr[20];

	printf("\n\nEnter The String:\t");
	gets(szStr);

	printf("\n\nEnter The Character To Set:\t");
	scanf("%c",&chChar);

	MyStrset(szStr, chChar);

	printf("\n\nNow String Is:\t");
	puts(szStr);

	return 0;
}

char *MyStrset(char *pStr, char chChar)
{
	int iCounter;

	for(iCounter = 0; pStr[iCounter] != '\0'; iCounter++)
		pStr[iCounter] = chChar;

	pStr[iCounter] = '\0';

	return pStr;
}
