#include<stdio.h>
int main(void)
{
	float fudian;
	printf("Enter a floating-point value:");
	scanf_s("%f", &fudian);
	printf("fixed-point notation:%f\n", fudian);
	printf("exponential notation:%e\n", fudian);
	printf("p notation:%a\n", fudian);
	return 0;
}