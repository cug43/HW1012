#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int i, space, star;
	for (i = 1; i <= 5; i++)
	{
		for (space = 1; space <= 5 - i; space++)
			printf(" ");
		for (star = 1; star <= 2 * i - 1; star++)
			printf("*");
		printf("\n");
	}
	system("pause");
	return 0;
}