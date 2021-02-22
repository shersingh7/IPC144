#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	double amount;

	printf("How much money do you have in your pockets?\n");
	scanf("%.2lf", &amount);

	printf("The amount of money in your pocket is $%.2lf", amount);


	return 0;
}