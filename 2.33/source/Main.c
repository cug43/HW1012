#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int mil, mon, dri, car, pass;
	float total;
	printf("Please intput total miles driven per day:");
	scanf("%d", &mil);
	printf("Please intput cost per gallon of gasoline:");
	scanf("%d", &mon);
	printf("Please intput average miles per gallon:");
	scanf("%d", &dri);
	printf("Please intput parking fees per day:");
	scanf("%d", &car);
	printf("Please intput tolls per day:");
	scanf("%d", &pass);
	total = (float)mil / (float)dri*(float)mon + car + pass;
	printf("User's cost per day of driving to work=%.2lf", total);
	return 0;
}