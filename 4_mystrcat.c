#include<stdio.h>

char *MyStrcat(char *, const char *);

int main()
{

	char szSource[20];
	char szDestination[40];

	printf("\n\nEnter Destination String:\t");
	gets(szDestination);

	printf("\n\nEnter Source String:\t");
	gets(szSource);

	MyStrcat(szDestination, szSource);

	printf("\n\nConcatenated String Is:\t");
	puts(szDestination);

	return 0;
}

char *MyStrcat(char *pDest, const char *pSrc)
{
	int iCounter1;
	int iCounter2;
	
	for(iCounter1 = 0; pDest[iCounter1] != '\0'; iCounter1++);
	
	if(pDest[iCounter1] == '\0')
	{
		for(iCounter2 = 0; pSrc[iCounter2] != '\0'; iCounter2++, iCounter1++)
			pDest[iCounter1] = pSrc[iCounter2];		
	}

	pDest[iCounter1] = '\0';

	return pDest;
}
