#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	double area, height, base;

	printf("height = ");
	scanf("%lf", &height);

	printf("base = ");
	scanf("%lf", &base);

	area = 0.5 * base * height;

	printf("Area of triangle= %.2lf", area);

	return 0;
}