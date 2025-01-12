#include <stdio.h>

int main()
{
    int amt, total;

    printf("Input the amount: ");
    scanf("%d", &amt);

    printf("There are:\n");

    total = amt / 100;
    printf("%d Note(s) of 100.00\n", total);
    amt %= 100;

    total = amt / 50;
    printf("%d Note(s) of 50.00\n", total);
    amt %= 50;

    total = amt / 20;
    printf("%d Note(s) of 20.00\n", total);
    amt %= 20;

    total = amt / 10;
    printf("%d Note(s) of 10.00\n", total);
    amt %= 10;

    total = amt;
    printf("%d Note(s) of 1.00\n", total);

    return 0;

}