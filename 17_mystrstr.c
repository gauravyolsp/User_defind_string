#include<stdio.h>

char *MyStrstr(const char *, const char *);

int main(void)
{
	char string1[20], string2[20], *ptr;

	printf("\n\nEnter The String:\t");
	gets(string1);
	
	printf("\n\nEnter String To Be Found:\t");
	gets(string2);

	ptr = MyStrstr(string1, string2);
	
	if(ptr == NULL)
	{
		puts("\n\nString Not Found\n");
	}

	else
	{
		printf("\n\nString Is Found At %d Location\n", (ptr - string1) + 1);
		printf("\n\nString Found In '%s'\n", ptr);
	}

	return 0;
}

char *MyStrstr(const char *pStr1, const char *pStr2)
{
	int iCounter1;
	int iCounter2;
	int iCounter3;

	for(iCounter1 = 0; pStr1[iCounter1] != '\0'; iCounter1++)
	{
		iCounter3 = iCounter1;
	
		for(iCounter2 = 0; pStr2[iCounter2] != '\0'; iCounter2++)
		{
			if(pStr1[iCounter3] != pStr2[iCounter2])
				break;
			iCounter3++;
		}
	
		if(pStr2[iCounter2] == '\0')
			return (char *) pStr1 + iCounter1;

		else
			iCounter2 = 0;
	}
	return NULL;
}
