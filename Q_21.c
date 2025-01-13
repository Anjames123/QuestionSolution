#include <stdio.h>

int main()
{
    int num;

    printf("Input an integer: ");
    scanf("%d", &num);

    if (num >=0 && num <= 20)
    {
        printf("Range [0, 20]\n");
    }
    else if (num >=21 && num <= 40)
    {
        printf("Range [21, 40]\n");
    }
    else if (num >=41 && num <= 60)
    {
        printf("Range [41, 60]\n");
    }
    else if (num >=61 && num <= 80)
    {
        printf("Range [61, 80]");
    }
    else
    {
    printf("Outside the range\n");
    }

    return 0;

} 