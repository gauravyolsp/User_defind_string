#include <stdio.h>

int MyStrncmpi(const char *, const char *, int);

int main(void)
{
	int iCh;
	int iCount;
	char szStr1[20];
	char szStr2[20];

	printf("\n\nEnter String1:\t");
	gets(szStr1);

	printf("\n\nEnter String2:\t");
	gets(szStr2);

	printf("\n\nEnter Count:\t");
	scanf("%d", &iCount);

	iCh = MyStrncmpi(szStr1, szStr2, iCount);

	if(iCh == 0)
		printf("\n\nBoth Strings Are Same\n");

	else
		printf("\n\nBoth Strings Are Diffrent\n");

	return 0;
}

int MyStrncmpi(const char *pStr1, const char *pStr2, int iCount)
{
	int iCounter;

	for(iCounter = 0; (pStr1[iCounter] != '\0'|| pStr2[iCounter] != '\0') && iCounter < iCount; iCounter++)	
	{
		if((pStr1[iCounter] == pStr2[iCounter]) || (pStr1[iCounter] - pStr2[iCounter]) == 32 || (pStr1[iCounter] - pStr2[iCounter]) == -32)
			continue;
		else
			return 1;
	}

	return 0;
}