#include <stdio.h>

int main()
{

    char op;
    double num1, num2;
    scanf("%c", &op);
    scanf("%lf%lf", &num1, &num2);
    

    switch (op)

    {
    case '+':
        printf("%lf+%lf = %lf", num1, num2, num1 + num2);
        break;

    case '-':
        printf("%lf-%lf = %lf", num1, num2, num1 - num2);
        break;

    case '*':
        printf("%lf*%lf = %lf", num1, num2, num1 * num2);
        break;

    case '/':
        printf("%lf/%lf = %lf", num1, num2, num1 / num2);
        break;

    default:
        break;
    }

    return 0;
}