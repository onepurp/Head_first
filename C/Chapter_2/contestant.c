#include <stdio.h>

int main()
{
	int contestant[] = {1, 2, 3};
	int *choice = contestant;

	contestant[0] = 2;
	contestant[1] = contestant[2];
	contestant[2] = *choice;

	printf("She chose the contestant %i\n", contestant[2]);
	
	return 0;
}
