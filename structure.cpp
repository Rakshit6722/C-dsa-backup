#include <iostream>
using namespace std;

struct stu_details
{
    /* data */

    string name;
    int roll;
    int marks[3];
    float avg;
    char grade;
} s1;

int main()
{

    s1.name = "rakshit";
    s1.roll = 2110991133;
    s1.marks[0] = 60;
    s1.marks[1] = 60;
    s1.marks[2] = 55;
    s1.avg = (float)(s1.marks[0] + s1.marks[1] + s1.marks[2]) / 3;
    s1.grade = 'F';

    cout << s1.avg;

    return 0;
}