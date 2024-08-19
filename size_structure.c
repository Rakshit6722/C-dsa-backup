#include <stdio.h>

// 32-bit(1 cycle) = 4 byte
// 64-bit(1 cycle) = 8 byte

struct student
{
    // char a[5];
    // char b;
    int roll;
} stu;

int main()
{

    printf("%d", sizeof(stu));

    return 0;
}