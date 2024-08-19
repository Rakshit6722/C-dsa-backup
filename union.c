#include <stdio.h>
#include <string.h>

// gives or works on the size of the vairable with largest size

union student
{
    /* data */
    char name[20];
    char grade;
    int roll;
} stu;

int main()
{

    strcpy(stu.name, "rakshit");
    
    stu.roll = 33;

    // it works on only one data at a time
    // union only shows the value of recently upadted data

    printf("%d\n", stu.roll);

    stu.grade = 'A';

    printf("%c\n", stu.grade);
    // printf("%c\n", stu.grade);
    // printf("%d", stu.roll);

    return 0;
}