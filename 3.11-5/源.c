#include<stdio.h>
int main(void)
{
	int year;
	printf("Please enter your year:");
	scanf_s("%d", &year);
	printf("The second is %e\n", year*3.156e7);
	return 0;
}