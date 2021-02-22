//==============================================
// Name:           Davinder Verma
// Student Number: 121802201
// Email:          dverma22@myseneca.ca
// Section:        NGG
// Workshop:       2 (at-home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Paste your in-lab code below and upgrade it to the at-home specifications
#include <stdio.h>

int main(void)

{
	double  amount, balance, gst;
	int loonies, quarters, dimes, nickels, pennies, intbalance;


	printf("Please enter the amount to be paid: $");
	scanf(" %lf", &amount);

	gst = amount * .13 + .005;
	printf("GST: %.2lf\n", gst);

	balance = amount+ gst;
	printf("Balance owing: $%.2lf\n", balance);

	loonies = balance;
	intbalance = balance * 100;
	intbalance = intbalance % 100;
	printf("Loonies required: %d, balance owing $%1.2lf\n", loonies, (float)intbalance / 100);

	quarters = intbalance / 25;
	intbalance = intbalance % 25;
	printf("Quarters required: %d, balance owing $%1.2lf\n", quarters, (float)intbalance / 100);

	dimes = intbalance / 10;
	intbalance = intbalance % 10;
	printf("Dimes required: %d, balance owing $%1.2lf\n", dimes, (float)intbalance / 100);

	nickels = intbalance / 5;
	intbalance = intbalance % 5;
	printf("Nickels required: %d, balance owing $%1.2lf\n", nickels, (float)intbalance / 100);

	pennies = intbalance / 1;
	intbalance = intbalance % 1;
	printf("Pennies required: %d, balance owing $%1.2lf\n", pennies, (float)intbalance / 100);	
	
	return 0;


}