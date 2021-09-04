#include <stdio.h>

int MyStrncmp(const char *, const char *, int);

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
	scanf("%d",&iCount);

	iCh = MyStrncmp(szStr1, szStr2, iCount);
	
	if(iCh == 0)
		printf("\n\nBoth Strings Are Same\n");

	else
		printf("\n\nBoth Strings Are Diffrent\n");

	return 0;
}

int MyStrncmp(const char *pStr1, const char *pStr2, int iCount)
{
	int iCounter1;

	for(iCounter1 = 0; (pStr1[iCounter1] != '\0' || pStr2[iCounter1] != '\0') && iCounter1 < iCount; iCounter1++)
	{
		if(pStr1[iCounter1] != pStr2[iCounter1])
			return 1;
	}
	return 0;	
}