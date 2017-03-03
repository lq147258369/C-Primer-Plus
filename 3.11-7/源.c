#include<stdio.h>
int main(void)
{
	int inch;
	printf("Please enter your height:");
	scanf_s("%d", &inch);
	printf("your height is %f\n", inch*2.54);
	return 0;
}