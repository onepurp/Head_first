#include <stdio.h>
#include <string.h>

int main()
{
	char s0[] = "dysfunctional", s1[] = "fun";

	if (strstr(s0, s1))
		puts("\"fun\" exist on \"dysfunctional\"");
	
	return 0;
}
