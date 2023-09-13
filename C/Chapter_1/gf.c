#include <stdio.h>

int main()
{
	int age;

	printf("=== Your perefect girlfreind's age! ===\n...\n");
	while (age = 1)
	{
		printf("Type your age: ");
		scanf("%2i", &age);
		printf("...\n");

		if (age < 18)
		{
			printf("FBI open up!!\nI'm quiting!!\n");
			break;
		}
			
		else if (age > 17 && age < 50)
		{
			printf("Your Woman should be %i years old!\n", (age / 2) + 9);
			puts("...\nLets start again..\n...");
			continue;
		}
		
		else
		{
			puts("Such a naughty old man!");
			continue;
		}
	}
	return 0;
}
