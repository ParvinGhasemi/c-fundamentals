/* 
	Cinversion of Fahrenheit to Celsius
	C = (F - 32) * 1.8
	Pap
	18 Apr 2025
*/

#include <stdio.h>

int main(void)
{
	int		fahrenheit, celsius;

	printf("Enter the temperature in Fahrenheit (int): ");
	scanf("%d", &fahrenheit);
	printf("Fahrenheit = %d\n", fahrenheit);
	celsius = (fahrenheit - 32) * 1.8;
	printf(" %d F is %d C\n", fahrenheit, celsius);
	return (0);
}

