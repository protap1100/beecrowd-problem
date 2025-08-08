#include <stdio.h>

int main()
{
    int totalDays;
    scanf("%d", &totalDays);
    int years, months, weeks, days;

    years = totalDays / 365;
    totalDays = totalDays % 365;

    months = totalDays / 30;
    totalDays = totalDays % 30;

    weeks = totalDays / 7;
    days = totalDays % 7;

    printf("Years: %d, Months: %d, Weeks: %d, Days: %d\n", years, months, weeks, days);

    return 0;
}
