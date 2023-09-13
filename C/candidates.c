#include <stdio.h>

int main()
{
	int x = 0;
	int y = 0;

	while (x < 5)
	{
		// y = x - y; // 00 11 21 32 42 T
		// y = y + x; // 00 12 24 36 48 F // 00 11 23 36 410 T

		/* y = y + 2;
	       	if (y > 4)
			y = y - 1; // 02 14 25 36 47 */

		/* x = x + 1;
		y = y + x; // 11 34 59 T */
		
		if (y < 5)
		{
			x = x + 1;
			if (y < 3)
				x = x - 1;
		}
		y = y + 2; // 02 14 36 58 F	

		printf("%i%i ", x, y);;
		x = x + 1;
	}
	return 0;
}
