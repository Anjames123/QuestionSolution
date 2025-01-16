#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, discriminant, root1, root2;

    printf("Input the first number (a): ");
    scanf("%f", &a);

    printf("Input the second number (b): ");
    scanf("%f", &b);

    printf("Input the third number (c): ");
    scanf("%f", &c);

    if (a == 0) {
        printf("This is a not a quadratic equation.\n");
    } else {
        discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Root1 = %.5f\n", root1);
            printf("Root2 = %.5f\n", root2);
        } else if (discriminant == 0) {

            root1 = -b / (2 * a);
            printf("Root1 = Root2 = %.5f\n", root1);
        } else {

            printf("It is not possible to find the root. \n");
        }
    }

    return 0;

