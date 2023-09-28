#include <stdio.h>
#include <string.h>

void find_track(char search_for[])
{

	char arrys[];

	for (int i = 0; i < 5; i++)
	{
		if (strstr(arrys[i], search_for))
			printf("Track %i: %s\n", i, arrys[i]);
	}

}

int main()
{
	char arrys[][11] = {
		"Hello",
		"This",
		"needs",
		"to be",
		"less",
		"than 10",};

	printf("The is the second line: %s\n", arrys[1]);
	printf("This is the fourth character in the third line: %s\n", arrys[3][2]);
	


	char search_for[80];

	printf("Search for: ");
	fgets(search_for, 79, stdin);
	find_track(search_for);


	return 0;
}
