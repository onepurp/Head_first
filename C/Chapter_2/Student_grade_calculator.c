#include <stdio.h>

int main()
{
	char name[19], grade[2];
	int score;

	printf("Student name: ");
	scanf("%20s", &name);
	printf("The Score: ");
	scanf("%2i", &score);

		if (score >= 90)
		{
			grade == 'A';
			printf("%s  %i  %s", name, score, grade); 
		}
}
