#include <stdio.h>

int main()
{
    int total_days, years, months, days;

    printf("Input number of days: ");
    scanf("%d", &total_days);

    years = total_days / 365;
    total_days %= 365;

    months = total_days / 30;
    days = total_days % 30;

    printf("%d year(s)\n", years);
    printf("%d Month(s)\n", months);
    printf("%d Day(s)\n", days);

    return  0;

}