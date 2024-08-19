#include <stdio.h>

int main()
{

    int a = 9;
    int b = 5;

    // using third variable
    // int temp = a;

    // a = b;
    // b = temp;

    // printf("%d\n",a);
    // printf("%d\n",b);

    // without using third vairable
    // a = a + b;
    // b = a - b;
    // a = a - b;

    // swapping in one line
    // 1: b = (a+b) - (a=b);
    // 2: a = a*b/(b=a)
    // 3: a = a^b^(b=a);
    // 4: a = a ^ b, b = a ^ b, a = a ^ b;
    // 5: a^=b,b^=a,a^=b;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

//one bucket represents a single value
//single value is always sorted