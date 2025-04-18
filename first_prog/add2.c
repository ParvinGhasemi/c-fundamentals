/* 	Read in Three Floats and Print Sum
	Pap
	Apr 18 2025
*/

#include <stdio.h>

int main(void)
{
	float a, b, sum;

	printf("Enter two floats: ");
	scanf("%f %f", &a, &b);
	printf("a = %f, b = %f\n", a, b);
	sum = a + b;
	printf("The sum is: %f\n", sum);

	return (0);
}
