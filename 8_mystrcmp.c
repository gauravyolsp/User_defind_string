#include <stdio.h>

int MyStrcmp(const char *, const char *);

int main(void)
{
	int iCh;
	char szStr1[20];
	char szStr2[20];

	printf("\n\nEnter String1:\t");
	gets(szStr1);

	printf("\n\nEnter String2:\t");
	gets(szStr2);

	iCh = MyStrcmp(szStr1, szStr2);

	if(iCh == 0)
		printf("\n\nBoth Strings Are Same\n");

	else
		printf("\n\nBoth Strings Are Diffrent\n");

	return 0;
}

int MyStrcmp(const char *pStr1, const char *pStr2)
{
	int iCounter1;

	for(iCounter1 = 0; pStr1[iCounter1] != '\0' || pStr2[iCounter1] != '\0'; iCounter1++)
	{
		if(pStr1[iCounter1] != pStr2[iCounter1])
			return 1;
	}	
}