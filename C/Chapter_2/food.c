#include <stdio.h>

int main()
{
	char food[10];

	puts("Enter your favorite food: ");
	fgets(food, sizeof(food), stdin);
	printf("%s! Nice taste!\n", food);
	
	return 0;
}
