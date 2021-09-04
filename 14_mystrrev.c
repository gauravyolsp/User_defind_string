#include <stdio.h>

char *MyStrrev(char *);

int main(void)
{
	char szStr[20];

	printf("\n\nEnter The String:\t");
	gets(szStr);

	MyStrrev(szStr);

	printf("\n\nReverse String Is:\t");
	puts(szStr);

	return 0;
}

char *MyStrrev(char *pStr)
{
	char chChar;
	int iCounter1;
	int iCounter2;

	for(iCounter1 = 0; pStr[iCounter1] != '\0'; iCounter1++);

	iCounter1--;
	for(iCounter2 = 0; iCounter1 > iCounter2; iCounter1--, iCounter2++)
	{
		chChar = pStr[iCounter1];
		pStr[iCounter1] = pStr[iCounter2];
		pStr[iCounter2] = chChar;
	}			
	return pStr;
}
