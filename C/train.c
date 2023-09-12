#include <stdio.h>

int main()
{
	int n;

	printf("Station Number: ");
	scanf("%d", &n);
	switch(n)
	{
		case 35:
			printf("Temsia\n");
			break;
		case 36:
			printf("Oulad taima\n");
			break;
		case 97:
			printf("lwlaya\n");
			break;
		default:
			printf("No idea\n");
	}
}


