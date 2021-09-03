#include <stdio.h>
#include <string.h>

char input[100];

void func()
{

	int i = strlen(input)-4;
	for (input[i];i >= 0;i--)
	{
		if (input[i] == '0')
		{
			printf("a");
		}
		else if (input[i] == '1')
		{
			printf("e");
		}
		else if (input[i] == '2')
		{
			printf("i");
		}
		else if (input[i] == '3')
		{
			printf("o");
		}
		else if (input[i] == '4')
		{
			printf("u");
		}
		else
		{
			printf("%c", input[i]);
		}

	}
}

int main()
{
	printf("Input: ");
	gets_s(input);

	func();
	
	return 0;
}