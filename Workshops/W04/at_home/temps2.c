//==============================================
// Name:           Davinder Verma
// Student Number: 121802201
// Email:          dverma22@myseneca.ca
// Section:        NGG
// Workshop:       4 (at-home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Place your code below

#include<stdio.h>
#define MAXDAYS 10

int main()

{
	int ndays = 0, i, num = 0, flag = 0, high_d = 0, low_d = 0, HIGH = 0, LOW = 0;
	double avg = 0, temp = 0;
	int high[MAXDAYS] = { 0 }, low[MAXDAYS] = { 0 };

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");
	printf("Please enter the number of days, between 3 and %d, inclusive: ", MAXDAYS);
	scanf("%d", &ndays);

	while (ndays < 3 || ndays > 10)
	{
		printf("\nInvalid entry, please enter a number between 3 and %d, inclusive: ", MAXDAYS);
		scanf("%d", &ndays);
	}
	printf("\n");


	for (i = 0; i < ndays; i++)
	{

		printf("Day %d - High: ", i + 1);
		scanf("%d", &high[i]);
		printf("Day %d - Low: ", i + 1);
		scanf("%d", &low[i]);

		if (high[i] > HIGH)
		{
			HIGH=high[i];
			high_d = i+1;
		}

		if (low[i] < LOW)
		{
			LOW = low[i];
			low_d = i+1;
		}

	}

	printf("\n");
	printf("Day  Hi  Low\n");

	for (i = 0; i < ndays; i++)
	{
		printf("%d    %d    %d\n", i + 1, high[i], low[i]);
	}

	printf("\nThe highest temperature was %d, on day %d\n", HIGH, high_d);
	printf("The lowest temperature was %d, on day %d\n", LOW, low_d);

	printf("\nEnter a number between 1 and %d to see the average temperature for the entered number of days, enter a negative number to exit: ", ndays);
	scanf("%d", &num);

	do
	{

		if (num >= 1 && num <= 5)
		{
			for (i = 0; i < num; i++)
			{
				temp += high[i] + low[i];
			}
			avg = (temp / (num * 2));
			temp = 0;
			printf("\nThe average temperature up to day %d is: %.2lf\n", num, avg);

			printf("\nEnter a number between 1 and %d to see the average temperature for the entered number of days, enter a negative number to exit: ", ndays);
			scanf("%d", &num);
		}
		else if (num < 0)
		{
			printf("\nGoodbye!\n");
			flag = 1;
		}
		else
		{
			printf("\nInvalid entry, please enter a number between 1 and 5, inclusive: ");
			scanf("%d", &num);
		}
	} while (flag == 0);


	return 0;
}















