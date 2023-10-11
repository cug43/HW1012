#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int num;
	printf("number  square  cube\n");
	for (num = 0; num <= 10; num++)
		printf("%d\t%d\t%d\n", num, num*num, num*num*num);
	system("pause");
	return 0;
}