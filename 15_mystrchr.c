#include <stdio.h>

char *MyStrchr(const char *, char);

int main()
{
	char chChar;
	char szStr[20];
	char *pPtr = NULL;

	printf("\n\nEnter The String:\t");
	gets(szStr);

	printf("\n\nEnter Character To Be Found:\t");
	scanf("%c",&chChar);

	pPtr = MyStrchr(szStr, chChar);

	if(pPtr == NULL)
		printf("\n\nCharacter Is Not Found\n");
	
	else
		printf("\n\nCharacter Is Found At %d Location\n",(pPtr - szStr) + 1);

	return 0;
}

char *MyStrchr(const char *pStr, char chChar)
{
	int iCounter;

	for(iCounter = 0; pStr[iCounter] != '\0'; iCounter++)
	{
		if(pStr[iCounter] == chChar)
			return (char *)pStr + iCounter;
	}
	return NULL;
}
