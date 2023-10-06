#include <stdio.h>

int main()
{
	float latitude;
	float longitude;
	char info [80];
	int started = 0;

	puts("data=[");
	while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, &info) == 3)
	{
		if (started)
			printf(",\n");
		else
			started = 1;

		if ((-90 > latitude > 90) || (-180 > longitude > 180))
		{
			printf("error 2\n");
			break;
		}
		else
			continue;

		printf("latitude: %f, longitude: %f, info: %s", latitude, longitude, info);
	};
	puts("\n]");

	return 0;
}
