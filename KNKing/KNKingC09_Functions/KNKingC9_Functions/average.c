// Computes pairwise averages of three numbers
#include <stdio.h>

double average(double a, double b); // DECLARATION

int main(void) {
	double x, y, z;
	printf("Enter three numbers : ");
	scanf_s("%lf%lf%lf", &x, &y, &z);
	printf("Average of %g and %g : %g\n", x, y, average(x, y));
	printf("Average of %g and %g : %g\n", y, z, average(y, z));
	printf("Average of %g and %g : %g\n", z, x, average(z, x));
	return 0;
}

double average(double a, double b)
{
	return (a + b) / 2;
}