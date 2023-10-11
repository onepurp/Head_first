#include <stdio.h>

int main()
{
	char text[] = "Hellalkfj aasldkfj alsdkfj asdlf asdlfjalkfj aasldkfj alsdkfj asdlf asdlfjalkfj aasldkfj alsdkfj asdlf asdlfjalkfj aasldkfj alsdkfj asdlf asdlfjalkfj aasldkfj alsdkfj asdlf asdlfjalkfj aasldkfj alsdkfj asdlf asdlfjalkfj aasldkfj alsdkfj asdlf asdlfjalkfj aasldkfj alsdkfj asdlf asdlfjow world";
	int i = 0;

	while (text == 1)
	{
		i++;
		if (i % 2)
			fprintf(stdout, "%s\n", text);
		else
			fprintf(stderr, "%s\n", text);
	}
	return 0;
}
