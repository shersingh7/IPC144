//==============================================
// Name:           Davinder Verma
// Student Number: 121802201
// Email:          dverma22@myseneca.ca
// Section:        NGG
// Workshop:       2 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Start your code below:
#include <stdio.h>

int main(void)
{
	double amount;
	double owing;
	double owing2;
	int loonies;
	int quarters;

	printf("Please enter the amount to be paid: $ ");
	scanf(" %lf", &amount);

	loonies = amount / 1;
	owing = amount - loonies;
	printf("Loonies required: %d, balance owing $%.2lf\n", loonies, owing);

	quarters = owing / 0.25;
	owing2 = owing - quarters*0.25;
	printf("Quarters required: %d, balance owing $%.2lf\n ", quarters, owing2);
	
	return 0;
}