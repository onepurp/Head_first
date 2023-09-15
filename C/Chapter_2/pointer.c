#include <stdio.h>

int main()
{
	int a = 1;
	printf("a adress: %p\n", &a);
	
	int *a_adress = &a; //I'am pointing a
	printf("a adress: %p\n", a_adress);

	int a_value = *a_adress;
	printf("a value: %i\n", a_value);

	*a_adress = 2; // I'am changine a value (changing a adress content)
	printf("a value: %i\n", *a_adress);

	return 0;
}
