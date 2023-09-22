#include <stdio.h>

void addition(int a, int b)
{
	printf("%i + %i = %i\n", a, b, a + b);
}

void subtraction(int a, int b)
{
	printf("%i - %i = %i\n", a, b, a - b);
}

void multiplication(int a, int b)
{
        printf("%i - %i = %i\n", a, b, a * b);
}

void division(int a, int b)
{
        printf("%i - %i = %i\n", a, b, a / b);
}


int main()
{
	int n, m;
	int number;

	/*printf("Simple Calculator Menu:\n");
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Quit\n");
	scanf("%2i", &number);*/

	
	while (number != 5)
	{

		printf("Simple Calculator Menu:\n");
        	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Quit\n");
        	scanf("%2i", &number);


		if (number == 1)
		{
			printf("First Number: ");
			scanf("%2i", &n);
			printf("Second Number: ");
               		scanf("%2i", &m);
			addition(n, m);
			continue;
		}
		else if (number == 2)
		{
			printf("First Number: ");
                        scanf("%2i", &n);
                        printf("Second Number: ");
                        scanf("%2i", &m);
                        subtraction(n, m);
			continue;
		}
		else if (number == 3)
                {
                        printf("First Number: ");
                        scanf("%2i", &n);
                        printf("Second Number: ");
                        scanf("%2i", &m);
                        multiplication(n, m);
			continue;
                }
		else if (number == 4)
                {
                        printf("First Number: ");
                        scanf("%2i", &n);
                        printf("Second Number: ");
                        scanf("%2i", &m);
                        division(n, m);
                }
		else if (number == 5)
			break;
		else
		{
			printf("Pleas type a number from the menu!\n");
			continue;
		}
	}

	return 0;
}
