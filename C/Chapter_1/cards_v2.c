#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[3];
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
		default:
			val = atoi(card_name);
	}

	if (val <= 6 && val >= 3)
		puts("count has gone up");
	else if (val == 10)
		puts("Count has gone down");

	return 0;
}
