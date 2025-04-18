/* 
	Circle and Area
	Pap
	Apr 18 2025
*/

#include <stdio.h>

#define PI 3.14159

int main(void)
{
	double radius = 0, area = 0.0;

	printf("Enter the radius: ");
	scanf("%lf", &radius);
	printf("radius = %f\n", radius);
	area = PI * radius * radius;
	printf("radius of %lf meters	>>	The area is: %lf sq. meters\n", radius, area);
	return (0);
}
