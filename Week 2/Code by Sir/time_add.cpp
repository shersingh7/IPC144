#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int days1, hours1, min1, totalMin1;
	int days2, hours2, min2, totalMin2;
	int combinedMinutes;
	const int MIN_PER_DAY = 24 * 60;

	printf("Enter first time as days, hours, minutes: ");
	scanf("%d%d%d", &days1, &hours1, &min1);
	printf("Enter second time as days, hours, minutes: ");
	scanf("%d%d%d", &days2, &hours2, &min2);

	totalMin1 = days1 * MIN_PER_DAY + hours1 * 60 + min1;
	totalMin2 = days2 * MIN_PER_DAY + hours2 * 60 + min2;
	combinedMinutes = totalMin1 + totalMin2;

	printf("%d days, ", combinedMinutes / MIN_PER_DAY);
	combinedMinutes = combinedMinutes % MIN_PER_DAY;
	printf("%d hours, ", combinedMinutes / 60);
	combinedMinutes = combinedMinutes % 60;
	printf("%d minutes\n", combinedMinutes);

	return 0;
}