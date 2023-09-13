#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[3];
	int count = 0;

	while (card_name[0] != 'X')
	{
		puts("Enter the card name: ");
		scanf("%2s", card_name);
		int val = 0;
	
		switch (card_name[0])
		{
			case 'Q':
			case 'K':
			case 'J':
				val = 10;
				break;
			case 'A':
				val = 11;
				break;
			case 'X':
				puts("Ending the program");
				break; // break wouldn’t break us out of the loop,
				       // because we’re inside a switch statement
			default:
				val = atoi(card_name);
				if (!(val >= 1 && val <= 10))
				{
					puts("The typed card value is out of range");
					continue;
				}
		}

		if (val <= 6 && val >= 3)
			count++;
		else if (val == 10)
			count--;

		printf("Current count: %i\n", count);
	}
	return 0;
}
