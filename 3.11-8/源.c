#include<stdio.h>
int main(void)
{
	int cup;
	printf("Please enter the cup:");
	scanf("%d", &cup);
	printf("the volume is %f pint\n", cup*0.5);
	printf("the volume is %d ounce\n", cup * 8);
	printf("the volume is %d spoon\n", cup * 16);
	return 0;
}