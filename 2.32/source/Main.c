#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	float h, w, bmi;
	printf("Please intput your height(m):");
	scanf("%f", &h);
	printf("Please intput your weight:");
	scanf("%f", &w);
	bmi = w / (h*h);
	printf("Your BMI=%.1f\n", bmi);
	if (bmi < 18.5)
		printf("Your BMI values is Underweight\n");
	if (bmi >= 18.5&&bmi <= 24.9)
		printf("Your BMI values is Normal\n");
	if (bmi >= 25 && bmi <= 29.9)
		printf("Your BMI values is Overweight\n");
	if (bmi >= 30)
		printf("Your BMI values is Obese\n");
	system("pause");
	return 0;
}