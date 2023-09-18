#include <stdio.h>

int main()
{
	char s[] = "How big is it?";
	char *t = s;

	printf("pointer size: %i\n", sizeof(t)); // it gives me the size of the pointer
						 // but if I do this...
	printf("arry size: %i\n", sizeof(s)); // you see! it gives me the 15 not 8 or 4 

	printf("s adress: %p\n", &s);
	printf("t adress: %p\n", &t); // is this what's called decay(losed info).. I think so..
				      // decay hapen when you pass array to a pointer
	
}
