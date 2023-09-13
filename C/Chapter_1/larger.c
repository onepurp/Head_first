#include <stdio.h>

int larger(int a, int b)
{
	if (a > b)
		return a;
	return b;
}

int main()
{
	int greater = larger(100, 1000);

	printf("%i is the greater!\n", greater);
	return 0;

}
