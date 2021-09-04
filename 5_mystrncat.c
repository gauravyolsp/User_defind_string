#include <stdio.h>

char *MyStrncat(char *, const char *, int);

int main()
{
	int iCount;	
	char szSource[20];
	char szDestination[40];
	
	printf("\n\nEnter Destination String:\t");
	gets(szDestination);

	printf("\n\nEnter Source String:\t");
	gets(szSource);

	printf("\n\nEnter Value Of n:\t");
	scanf("%d", &iCount);

	MyStrncat(szDestination, szSource, iCount);
	
	printf("\n\nConcatenated String Is:\t");
	puts(szDestination);
	
	return 0;
}

char *MyStrncat(char * pDest, const char *pSrc, int iCount)
{
	int iCounter1;
	int iCounter2;
	
	for(iCounter1 = 0; pDest[iCounter1] != '\0'; iCounter1++);

	for(iCounter2 = 0; pSrc[iCounter2] != '\0' && iCounter2 < iCount; iCounter1++, iCounter2++)
		pDest[iCounter1] = pSrc[iCounter2];	

	pDest[iCounter1] = '\0';
	return pDest;
}