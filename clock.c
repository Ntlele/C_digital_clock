//How to design a clock using c languege

#include <stdio.h>
#include <time.h> // to use the sleep() function
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	int hours, minutes, seconds;

	hours = minutes = seconds;

	while(1)
	{
		//clear the output screen if previously used
		system("clear");

		//the format to print the time is HH : mm : ss
		printf("%02d : %02d : %02d", hours, minutes, seconds);

		//Clear rthe buffer for new output
		fflush(stdout);

		//Increament the seconds variable
		seconds++;

		//update the time variables
		if (seconds == 60)
		{
			minutes += 1;
			seconds = 0;
		}

		if (minutes == 60)
		{
			hours += 1;
			minutes = 0;
		}

		if (hours == 24)
		{
			seconds == 0;
			minutes == 0;
			hours == 0;
		}
		sleep(1);
	}
	return (0);
}
