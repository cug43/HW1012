#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int num;
	printf("Please intput one integer:");
	scanf("%d", &num);
	if (num % 2 == 0)
		printf("%d is even\n", num);
	else printf("%d is odd\n", num);
	system("pause");
	return 0;
}