#include <stdio.h>

int main()
{
    int total_dist;
    float total_fuel, avrg_cons;

    printf("Input total distance on km: ");
    scanf("%d", &total_dist);

    printf("Input total fuel spent in liters: ");
    scanf("%f", &total_fuel);

    avrg_cons = total_dist / total_fuel;

    printf("Average consumption(km/lt): %.3f\n", avrg_cons);

    return 0;
}