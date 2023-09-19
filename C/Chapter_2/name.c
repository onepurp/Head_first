#include <stdio.h>

int main()
{
	char name[20];
	char last_name[20]; // ze3ma 7dek 20
	int age;

	printf("Enter your name: ");
	scanf("%19s", name); // ze3ma madertch liha & 7itach ghtpointi lya 3la l7arf lowel safi?
	printf("Enter your Last name: ");
	scanf("%19s", last_name);
	printf("Enter your age: ");
	scanf("%2i", &age); // hna geltlih 7tha liya dik lvalue fhad ladress
	printf("Hello MR %s %s, You are %i years old!\n", name, last_name, age); // f last_name tbdlat lvalue..

	return 0;
}

