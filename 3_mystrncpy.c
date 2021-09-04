#include <stdio.h>
#define MAX 50

char *MyStrncpy(char *, const char *, int);

int main(void)
{
	int iCount;
	char szSrc[MAX];
	char szDest[MAX];

	printf("\n\nEnter Source String:\t");
	gets(szSrc);

	printf("\n\nEnter Value Of n:\t");
	scanf("%d", &iCount);

	printf("\n\nSource String Is:\t");
	puts(szSrc);

	MyStrncpy(szDest, szSrc, iCount);

	printf("\n\nDestination String Is:\t");
	puts(szDest);	
	return 0;
}
 
char *MyStrncpy(char *pDest, const char *pSrc, int iCount)
{
	int iCounter;

	for(iCounter = 0; iCounter < iCount; iCounter++)
	{
		if(pSrc[iCounter] == '\0')
			break;	
		else
			pDest[iCounter] = pSrc[iCounter];
	}
	
	pDest[iCounter] = '\0';

	return pDest;
}