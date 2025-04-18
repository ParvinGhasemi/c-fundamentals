
/* 	Read in Three Floats and Print Sum
	Pap
	Apr 18 2025
*/

#include <stdio.h>

int main(void)
{
	float a, b, c, sum;
	printf("Enter three floats: ");
	scanf("%f %f %f", &a, &b, &c);
	printf("a = %f, b = %f, c = %f\n", a, b, c);
	sum = a + b + c;
	printf("The sum is: %f\n\n", sum);
	return (0);
}
