#include <stdio.h>

int main()
{
	int contestant[] = {1, 2, 3};
	int *choice = contestant;

	contestant[0] = 2;
	contestant[1] = contestant[2];
	contestant[2] = *choice; // I do not know if I make it (* choice = contestant[2])
				// it gives me 3 instead of 2 like this one

	printf("She chose the contestant %i\n", contestant[2]);
	
	return 0;
}
