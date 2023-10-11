#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int a, b;
	printf("Please intput two integers:");
	scanf("%d%d", &a, &b);
	if (a%b == 0)
		printf("%d is %d multiple\n", b, a);
	else printf("%d isn't %d multiple\n", b, a);
	system("pause");
	return 0;
}