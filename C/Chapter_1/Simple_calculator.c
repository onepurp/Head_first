#include <stdio.h>

void addition(int a, int b)
{
	printf("%i + %i = %i\n", a, b, a + b);
}


int main()
{
	int n = 1, m = 2;
	addition(n, m);

	return 0;
}
