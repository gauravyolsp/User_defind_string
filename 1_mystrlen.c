#include <stdio.h>

int MyStrlen(const char *);


int main()
{
	char *ptr="Hello";
	char str[]="Good";

	printf("\nThe Length Of Hello Is %d\n",MyStrlen(ptr));
	printf("The Length Of Good Is %d\n",MyStrlen(str));
	printf("The Length Of Morning Is %d\n",MyStrlen("Morning"));

	return 0;
}

int MyStrlen(const char *szStr)
{
	int iCounter;
	
	for(iCounter = 0; szStr[iCounter] != '\0'; iCounter++);
	return iCounter;
}
