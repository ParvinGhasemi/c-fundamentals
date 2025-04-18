/* 
	The distance of a marathon in kilometers
	Pap
	18 Apr 2025
*/

#include <stdio.h>

int main(void)
{
	int	miles = 26, yards = 385;
	double km;

	km = 1.60934 * (miles + (yards / 1760.0));
	printf("The distance of a marathon is: %f km\n\n", km);
	return (0);
}
