//Ocean Levels
#include <stdio.h>

int main ()
{
	double oceanRise = 1.5;
	int year5 = 5;
	int year7 = 7;
	int year10 = 10;
	double futureRise5 = year5 * oceanRise;
	double futureRise7 = year7 * oceanRise;
	double futureRise10 = year10 * oceanRise;


	printf("This program calculates the difference in future ocean levels to the present.\n");

	printf("In 5 years, the ocean will be %.1f millimeters higher.\n", futureRise5);

	printf("In 7 years, the ocean will be %.1f millimeters higher.\n", futureRise7);

	printf("In 10 years, the ocean will be %.1f millimeters higher.\n",futureRise10);

	return 0;
}