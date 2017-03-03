#include <stdio.h>
int main(void)
{
	int n, n2, n3;
	n = 5;
	n2 = n * n;
	n3 = n2 * n2;
	printf("n = %d, n squared = %d, n = cubed %d\n, n, n2, n3");
	printf("Hello!\n");
	n3 = sub(n, n2);
	return 0;
}

int sub(int a, int b)
{
	return a + b;
}