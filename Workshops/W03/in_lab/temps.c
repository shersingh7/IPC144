//==============================================
// Name:           Davinder Verma
// Student Number: 121802201
// Email:          dverma22@myseneca.ca
// Section:        NGG
// Workshop:       3 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:

#include <stdio.h>

#define NUMS 3
int main(void)

{
	int i, high=0, low=0;
	double mean = 0, total_high = 0.0, total_low = 0.0, total_temp=0;

	printf("---=== IPC Temperature Analyzer ===---\n");

	for (i = 1; i <= NUMS; i++)
	{
		do {
			
			printf("Enter the high value for day %d: ", i);
			scanf("%d", &high);

			printf("\nEnter the low value for day %d: ", i);
			scanf("%d", &low);

			printf("\n");
			
			if (high < low || high > 40 || low < -40)
			{
				printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n\n");
			}
		} while (high < low || high > 40 || low < -40);
		total_high += high;
		total_low += low;

		total_temp = total_high + total_low;
		mean = total_temp / (NUMS * 2);
	}

	printf("The average (mean) temperature was: %.2lf\n", mean);

	return 0;
}

