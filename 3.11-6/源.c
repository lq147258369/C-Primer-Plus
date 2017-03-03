#include<stdio.h>
int main(void)
{
	float molecule = 3e-23;
	int num;
	printf("Please enter the kuatuo:");
	scanf_s("%d", &num);
	printf("the quality is %e\n", num / molecule);
	return 0;
}