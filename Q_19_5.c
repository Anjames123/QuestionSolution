#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    if (a > 5 && b > 15) {
        printf("Both condition are true.\n");
    } else {
        printf("At least one condition is false.\n");
    }

    return 0;
}