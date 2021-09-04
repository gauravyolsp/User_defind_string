#include <stdio.h>

char *MyStrnset(char *, char, int);

int main()
{
	int iCount;
	char chChar;
	char szStr[20];

	printf("\n\nEnter The String:\t");
	gets(szStr);

	printf("\n\nEnter The Character To Set:\t");
	scanf("%c", &chChar);
	
	printf("\n\nEnter The Value Of n:\t");
	scanf("%d", &iCount);

	MyStrnset(szStr, chChar, iCount);

	printf("\n\nNow String Is:\t");
	puts(szStr);
	return 0;
}

char *MyStrnset(char *pStr, char chChar, int iCount)
{
	int iCounter;
	
	for(iCounter = 0; pStr[iCounter] != '\0'  && iCounter < iCount; iCounter++)
		pStr[iCounter] = chChar;

	return pStr;
}