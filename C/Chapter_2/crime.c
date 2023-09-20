#include <stdio.h>

int main()
{
	char masked_rider[] = "Alive";
	char *jemmy = masked_rider;

	printf("Masked rider is %s, jemmy is %s\n", masked_rider, jemmy);
	
	masked_rider[0] = 'D';
	masked_rider[1] = 'E';
	masked_rider[2] = 'A';
	masked_rider[3] = 'T';
	masked_rider[4] = 'H';
	
	printf("Masked rider is %s, jemmy is %s\n", masked_rider, jemmy);
	
	return 0;
}
