#include <stdio.h>

int main()
{

    int a = 7;
    int *p = &a;
    int **q = &p;
    int ***r = &q;

    printf("%d", ***r);

    return 0;
}