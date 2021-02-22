//==============================================
// Name:           Davinder Verma
// Student Number: 121802201
// Email:          dverma22@myseneca.ca
// Section:        NGG
// Workshop:       4 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:

#include<stdio.h>

int main()

{
	int ndays = 0, i;
	int high[5] = { 0 };
	int low[5] = { 0 };

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");

	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &ndays);

	printf("\n");

	while (ndays < 3 || ndays > 10)
	{
		printf("Invalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &ndays);
	}
	printf("\n");


	for (i = 0; i < ndays; i++)
	{

		printf("Day %d - High: ", i + 1);
		scanf("%d", &high[i]);
		printf("Day %d - Low: ", i + 1);
		scanf("%d", &low[i]);


	}

	printf("\n");
	printf("Day  Hi  Low\n");
	for (i = 0; i < ndays; i++)
	{
		printf("%d    %d    %d\n", i + 1, high[i], low[i]);
	}
	return 0;
}














