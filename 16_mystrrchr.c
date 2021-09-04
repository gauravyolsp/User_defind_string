#include<stdio.h>

char *MyStrrchr(const char *, char);

int main(void)
{
	char str[20], ch;
	char *ptr;

	printf("\n\nEnter The String:\t");
	gets(str);
	
	printf("\n\nEnter Character To Be Found:\t");
	scanf("%c",&ch);
	
	ptr = MyStrrchr(str,ch);

	if(ptr == NULL)
		printf("\n\nCharacter Is Not Found\n");

	else
		printf("\n\nCharacter Is Found At %d Location\n",(ptr-str)+1);

	return 0;
}

char *MyStrrchr(const char *pStr, char chChar)
{
	int iCounter;
	
	for(iCounter = 0; pStr[iCounter] != '\0'; iCounter++);

	while(iCounter >= 0)
	{
		if(pStr[iCounter] == chChar)
			return (char *)pStr + iCounter;

		iCounter--;
	}

	return NULL;
}
