#include <stdio.h>

int main()
{
    int x, y, z;
    float p;

    printf("Input the first number: ");
    scanf("%d", &x);

    printf("Input the second number: ");
    scanf("%d", &y);

    printf("Input the third number: ");
    scanf("%d", &z);

    if (x < (y + z) && y < (x + z) && z < (x + y))
    {

    p = x + y + z;
    printf("Perimeter of triangle is: %.lf\n", p);
    }
    else
    {
        printf("Not possible to create a triangle..!");
    }

    return 0;

}