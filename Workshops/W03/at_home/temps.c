//==============================================
// Name:           Davinder Verma
// Student Number: 121802201
// Email:          dverma22@myseneca.ca
// Section:        NGG
// Workshop:       3 (at-home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define NUMS 4

int main(void)

{
	int i, high = 0, low = 0, HIGH = 0, high_d = 0, low_d = 0, LOW = 0;
	double OVERALL=0.0, mean_high=0.0, mean_low=0.0,total_high = 0.0, total_low = 0.0, total_temp = 0.0;

	printf("---=== IPC Temperature Analyzer ===---\n");
	
	for (i = 1; i <= NUMS; i++)
	{
		do {
			printf("Enter the high value for day %d: ", i);
			scanf("%d", &high);

			printf("\nEnter the low value for day %d: ", i);
			scanf("%d", &low);

			printf("\n");

			if (i == 1)
			{	
				LOW = low;
				HIGH = high;
				low_d = i;
				high_d = i;
			}

			if (high < low || high > 40 || low < -40)
			{
				printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
				printf("\n");
			}

			if (high > HIGH)
			{
				HIGH = high;
				high_d = i;
			}

			if (low < LOW)
			{
				LOW = low;
				low_d = i;
			}


		} while ((high < low) || (high > 40 && low < -40));
		
		total_high += high;
		total_low += low;
				
	}

	total_temp = total_high + total_low;
	OVERALL = total_temp / (NUMS * 2);
	mean_high = total_high / NUMS;
	mean_low = total_low / NUMS;

	printf("The average (mean) LOW temperature was: %.2lf\n", mean_low);
	printf("The average (mean) HIGH temperature was: %.2lf\n", mean_high);
	printf("The average (mean) temperature was: %.2lf\n", OVERALL);
	printf("The highest temperature was %d, on day %d\n",HIGH,high_d);
	printf("The lowest temperature was %d, on day %d\n",LOW,low_d);

	return 0;
}

