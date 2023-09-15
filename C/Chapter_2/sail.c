#include <stdio.h>

void go_south_east(int *lat, int *lon)
{
	*lat = *lat + 1; // Latitude (khat l3ard)
	*lon = *lon - 1; // longitude (khat toul)
}

int main()
{
	int latitude = 32;
	int longitude = -64;

	go_south_east(&latitude, &longitude);
	printf("We are now at [%i, %i]\n", latitude, longitude);

	return 0;
}

