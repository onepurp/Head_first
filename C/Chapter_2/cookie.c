#include <stdio.h>

void fortune_cookie(char msg[])
{
	printf("The msg: %s\n", msg);
	printf("The size of msg is: %i bytes\n", sizeof(msg));
}

int main()
{
	char text[] = "Cookies make you fat!";

	fortune_cookie(text);
	printf("The text is storing at: %p\n", text);

	return 0;
}
