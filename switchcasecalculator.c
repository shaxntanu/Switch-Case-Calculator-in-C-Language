#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);
    char o;
    printf("\nEnter operator +, -, *, /: ");
    scanf(" %c", &o);
    switch (o)
    {
    case '+':
        printf("Sum = %d", a + b);
        break;
    case '-':
        printf("Difference = %d", a - b);
        break;
    case '*':
        printf("Product = %d", a * b);
        break;
    case '/':
        printf("Division = %f", (float)a / (float)b);
        break;
    default:
        printf("Invalid Operator/Input");
        break;
    }
    printf("\nThank you for using the calculator.\nMade by Shantanu");
    return 0;
}
