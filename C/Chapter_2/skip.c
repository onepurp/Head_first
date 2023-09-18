#include <stdio.h>

void msg(char *skip)
{
	puts(skip + 6); // 3lach fach dert skip[6] mabghatch tkhdem?
			// aah bach ze3ma ykeml yprini liya men 7
}

int main()
{
	char drink[] = {3, 4, 1};

	printf("give it the 2nd value: %i\n", drink[1]); // drink[0] = *drink
							 // drink[1] = *(drink + 1)
	printf("She send this messsage to you 'Don't Call me!' but you understand just what you want\nThis is what your are seeing:\n");

	char *her_msg = "Don't Call me!";
	msg(her_msg);
	
}
