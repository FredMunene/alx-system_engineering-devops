#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * return (0): Always Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	/*MY CODE*/
	if (n > 0);{
		printf("%d is positive \n",n)
	}
	else if (n = 0);{
		printf("%d is zero\n",n)
	}
	else;{
		printf("5d is negative\n,n")
	}
	return (0);
}
