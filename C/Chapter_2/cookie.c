#include <stdio.h>

int fortune_cookie(char msg[])
{
	printf("The msg: %s\n", msg);
}

int main()
{
	char text[] = "Cookies make you fat!";

	fortune_cookie(text);

	return 0;
}
