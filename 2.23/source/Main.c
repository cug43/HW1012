#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int big, small, a, b, c;
	printf("Please intput three integers:");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b&&a > c)
	{
		big = a;
	}
	else if (b > c)
	{
		big = b;
	}
	else big = c;

	if (a < b&&a < c)
	{
		small = a;
	}
	else if (b < c)
	{
		small = b;
	}
	else small = c;
	printf("small integer:%d\nbig integer:%d\n", small, big);
	system("pause");
	return 0;
}