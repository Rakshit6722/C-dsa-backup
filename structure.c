// #include <stdio.h>
// #include <string.h>

// //structure is a datatype

// //structure take 0 size in memory until structure variable is declared

// // METHOD1
// //      struct stu_details
// //      {
// //          /* data */

// //         char name[100];
// //         int roll;
// //         int marks[3];
// //         float avg;
// //         char grade;
// //     };

// // int main()
// // {

// //     // Structure
// //     // It is a user defined date type
// //     // It is a collection of different data types under a single unit
// //     // struct keyword is used to define structure
// //     // it can be global or local

// //     // we cannot initialize any structure member at the time of structure declaration
// //     // cannot declare any function inside structure

// //     // structure variable allows you to access
// //     struct stu_details s1;

// //     //assigning value to s1 variable;
// //     strcpy(s1.name,"rakshit");
// //     s1.roll = 2110991133;
// //     s1.marks[0] = 60;
// //     s1.marks[1] = 60;
// //     s1.marks[2] = 55;
// //     s1.avg = (float)(s1.marks[0]+s1.marks[1]+s1.marks[2])/3;
// //     s1.grade = 'F';

// //     printf("%s\n",s1.name);
// //     printf("%d\n",s1.roll);
// //     printf("%d\n",s1.marks[0]);
// //     printf("%d\n",s1.marks[1]);
// //     printf("%d\n",s1.marks[2]);
// //     printf("%.2f\n",s1.avg);
// //     printf("%c\n",s1.grade);

// // return 0;
// // }

// // METHOD 2
// //      struct stu_details
// //      {
// //          /* data */

// //         char name[100];
// //         int roll;
// //         int marks[3];
// //         float avg;
// //         char grade;
// //     };
// //     struct stu_details s1;

// // int main()
// // {

// //     strcpy(s1.name,"rakshit");
// //     s1.roll = 2110991133;
// //     s1.marks[0] = 60;
// //     s1.marks[1] = 60;
// //     s1.marks[2] = 55;
// //     s1.avg = (float)(s1.marks[0]+s1.marks[1]+s1.marks[2])/3;
// //     s1.grade = 'F';

// //     printf("%s\n",s1.name);
// //     printf("%d\n",s1.roll);
// //     printf("%d\n",s1.marks[0]);
// //     printf("%d\n",s1.marks[1]);
// //     printf("%d\n",s1.marks[2]);
// //     printf("%.2f\n",s1.avg);
// //     printf("%c\n",s1.grade);

// // return 0;
// // }

// // METHOD3

// //   struct stu_details
// //     {
// //         /* data */

// //         char name[100];
// //         int roll;
// //         int marks[3];
// //         float avg;
// //         char grade;
// //     }s1;

// // int main()
// // {

// //     strcpy(s1.name,"rakshit");
// //     s1.roll = 2110991133;
// //     s1.marks[0] = 60;
// //     s1.marks[1] = 60;
// //     s1.marks[2] = 55;
// //     s1.avg = (float)(s1.marks[0]+s1.marks[1]+s1.marks[2])/3;
// //     s1.grade = 'F';

// //     printf("%s\n",s1.name);
// //     printf("%d\n",s1.roll);
// //     printf("%d\n",s1.marks[0]);
// //     printf("%d\n",s1.marks[1]);
// //     printf("%d\n",s1.marks[2]);
// //     printf("%.2f\n",s1.avg);
// //     printf("%c\n",s1.grade);

// // return 0;
// // }

// // pointer to a structure, structure pointer (->)

// //   struct stu_details
// //     {
// //         /* data */
// //         //members
// //         char name[100];
// //         int roll;
// //         int marks[3];
// //         float avg;
// //         char grade;
// //     };
// //     //structure variable
// //     struct stu_details s1;

// // int main()
// // {

// //     struct stu_details *ptr = &s1;
// //     strcpy(ptr->name,"rakshit");
// //     ptr->roll = 2110991133;
// //     ptr->marks[0] = 60;
// //     ptr->marks[1] = 60;
// //     ptr->marks[2] = 55;
// //     ptr->avg = (float)(s1.marks[0]+s1.marks[1]+s1.marks[2])/3;
// //     ptr->grade = 'F';

// //     printf("%s\n",s1.name);
// //     printf("%d\n",s1.roll);
// //     printf("%d\n",s1.marks[0]);
// //     printf("%d\n",s1.marks[1]);
// //     printf("%d\n",s1.marks[2]);
// //     printf("%.2f\n",s1.avg);
// //     printf("%c\n",s1.grade);

// // return 0;
// // }

// // struct stu_details
// //     {
// //         /* data */

// //         char name[100];
// //         int roll;
// //         int marks[3];
// //         float avg;
// //         char grade;
// //     }s1;

// // int main()
// // {

// //     struct stu_details s1 = {"ram",13,98,99,68,97.44,'A'};

// //     printf("%s\n",s1.name);
// //     printf("%d\n",s1.roll);
// //     printf("%d\n",s1.marks[0]);
// //     printf("%d\n",s1.marks[1]);
// //     printf("%d\n",s1.marks[2]);
// //     printf("%.2f\n",s1.avg);
// //     printf("%c\n",s1.grade);

// // return 0;
// // }

// // struct stu_details
// //     {
// //         /* data */

// //         char name[100];
// //         int roll;
// //         int marks[3];
// //         float avg;
// //         char grade;
// //     };

// // int main()
// // {

// //     struct stu_details s1;
// //     s1 = {"ram",13,98,99,68,97.44,'A'};//this will not work, it will throw error

// //     printf("%s\n",s1.name);
// //     printf("%d\n",s1.roll);
// //     printf("%d\n",s1.marks[0]);
// //     printf("%d\n",s1.marks[1]);
// //     printf("%d\n",s1.marks[2]);
// //     printf("%.2f\n",s1.avg);
// //     printf("%c\n",s1.grade);

// // return 0;
// // }

// // struct stu_details
// //     {
// //         /* data */

// //         char name[100];
// //         int roll;
// //         int marks[3];
// //         float avg;
// //         char grade;
// //     };
// //    struct stu_details s1 = {"ram",13,98,99,68,97.44,'A'};

// // int main()
// // {

// //     printf("%s\n",s1.name);
// //     printf("%d\n",s1.roll);
// //     printf("%d\n",s1.marks[0]);
// //     printf("%d\n",s1.marks[1]);
// //     printf("%d\n",s1.marks[2]);
// //     printf("%.2f\n",s1.avg);
// //     printf("%c\n",s1.grade);

// // return 0;
// // }

// // struct stu_details
// //     {
// //         /* data */

// //         char name[100];
// //         int roll;
// //         int marks[3];
// //         float avg;
// //         char grade;
// //     }s1 = {"ram",13,98,99,68,97.44,'A'};

// // int main()
// // {

// //     printf("%s\n",s1.name);
// //     printf("%d\n",s1.roll);
// //     printf("%d\n",s1.marks[0]);
// //     printf("%d\n",s1.marks[1]);
// //     printf("%d\n",s1.marks[2]);
// //     printf("%.2f\n",s1.avg);
// //     printf("%c\n",s1.grade);

// // return 0;
// // }

// // struct stu_details
// //     {
// //         /* data */

// //         char name[100];
// //         int roll;
// //         int marks[3];
// //         float avg;
// //         char grade;
// //     }s1 = {'A',"ram",13,98,99,68,97.44};//show error

// // int main()
// // {

// //     printf("%s\n",s1.name);
// //     printf("%d\n",s1.roll);
// //     printf("%d\n",s1.marks[0]);
// //     printf("%d\n",s1.marks[1]);
// //     printf("%d\n",s1.marks[2]);
// //     printf("%.2f\n",s1.avg);
// //     printf("%c\n",s1.grade);

// // return 0;
// // }

// // designated intializion

// // struct stu_details
// //     {
// //         /* data */

// //         char name[100];
// //         int roll;
// //         int marks[3];
// //         float avg;
// //         char grade;
// //     }s1;

// // int main()
// // {

// //    struct stu_details s1 = {.roll=13,.name="rakshit",.avg=88.55,.marks[0]=98,.marks[1]=77,.marks[2]=88,.grade='A'};
// //     printf("%s\n",s1.name);
// //     printf("%d\n",s1.roll);
// //     printf("%d\n",s1.marks[0]);
// //     printf("%d\n",s1.marks[1]);
// //     printf("%d\n",s1.marks[2]);
// //     printf("%.2f\n",s1.avg);
// //     printf("%c\n",s1.grade);

// // return 0;
// // }

// // struct stu_details
// //     {
// //         /* data */

// //         char name[100];
// //         int roll;
// //         int marks[3];
// //         float avg;
// //         char grade;
// //     } s1 = {.roll=13,.name="rakshit",.avg=88.55,.marks[0]=98,.marks[1]=77,.marks[2]=88,.grade='A'};

// // int main()
// // {

// //     printf("%s\n",s1.name);
// //     printf("%d\n",s1.roll);
// //     printf("%d\n",s1.marks[0]);
// //     printf("%d\n",s1.marks[1]);
// //     printf("%d\n",s1.marks[2]);
// //     printf("%.2f\n",s1.avg);
// //     printf("%c\n",s1.grade);

// // return 0;
// // }

// // struct stu_details
// // {
// //     /* data */

// //     char name[100];
// //     int roll;
// //     int marks[3];
// //     float avg;
// //     char grade;
// // } s1, s2;

// // int main()
// // {
// //      struct stu_details s1 = {.roll=13,.name="rakshit",.avg=88.55,.marks[0]=98,.marks[1]=77,.marks[2]=88,.grade='A'};

// //     strcpy(s2.name, "raghav");
// //     s2.roll = 2110991112;
// //     s2.marks[0] = 33;
// //     s2.marks[1] = 33;
// //     s2.marks[2] = 33;
// //     s2.avg = (float)(s1.marks[0] + s1.marks[1] + s1.marks[2]) / 3;
// //     s2.grade = 'F';

// //     printf("%s\n", s1.name);
// //     printf("%d\n", s1.roll);
// //     printf("%d\n", s1.marks[0]);
// //     printf("%d\n", s1.marks[1]);
// //     printf("%d\n", s1.marks[2]);
// //     printf("%.2f\n", s1.avg);
// //     printf("%c\n", s1.grade);

// //     printf("%s\n", s2.name);
// //     printf("%d\n", s2.roll);
// //     printf("%d\n", s2.marks[0]);
// //     printf("%d\n", s2.marks[1]);
// //     printf("%d\n", s2.marks[2]);
// //     printf("%.2f\n", s2.avg);
// //     printf("%c\n", s2.grade);

// //     return 0;
// // }

// // struct stu_details
// // {
// //     /* data */

// //     char name[100];
// //     int roll;
// //     int marks[3];
// //     float avg;
// //     char grade;
// // } s1;

// // int main()
// // {
// //     struct stu_details s1[2];

// //     strcpy(s1[0].name, "rakshit");
// //     s1[0].roll = 2110991112;
// //     s1[0].marks[0] = 33;
// //     s1[0].marks[1] = 33;
// //     s1[0].marks[2] = 33;
// //     s1[0].avg = (float)(s1[0].marks[0] + s1[0].marks[1] + s1[0].marks[2]) / 3;
// //     s1[0].grade = 'F';

// //     strcpy(s1[1].name, "rakshit");
// //     s1[1].roll = 2110991112;
// //     s1[1].marks[0] = 33;
// //     s1[1].marks[1] = 33;
// //     s1[1].marks[2] = 33;
// //     s1[1].avg = (float)(s1[1].marks[0] + s1[1].marks[1] + s1[1].marks[2]) / 3;
// //     s1[1].grade = 'F';

// //     printf("%s\n", s1[0].name);
// //     printf("%d\n", s1[0].roll);
// //     printf("%d\n", s1[0].marks[0]);
// //     printf("%d\n", s1[0].marks[1]);
// //     printf("%d\n", s1[0].marks[2]);
// //     printf("%.2f\n", s1[0].avg);
// //     printf("%c\n", s1[0].grade);

// //     printf("%s\n", s1[1].name);
// //     printf("%d\n", s1[1].roll);
// //     printf("%d\n", s1[1].marks[0]);
// //     printf("%d\n", s1[1].marks[1]);
// //     printf("%d\n", s1[1].marks[2]);
// //     printf("%.2f\n", s1[1].avg);
// //     printf("%c\n", s1[1].grade);

// //     return 0;
// // }

// // struct stu_details
// // {
// //     /* data */

// //     char name[100];
// //     int roll;
// //     int marks[3];
// //     float avg;
// //     char grade;
// // } s1;

// // int main()
// // {
// //     struct stu_details s1[2];

// //     for(int i=0; i<3; i++){
// //         scanf("%s")
// //     }

// //     printf("%s\n", s1[0].name);
// //     printf("%d\n", s1[0].roll);
// //     printf("%d\n", s1[0].marks[0]);
// //     printf("%d\n", s1[0].marks[1]);
// //     printf("%d\n", s1[0].marks[2]);
// //     printf("%.2f\n", s1[0].avg);
// //     printf("%c\n", s1[0].grade);

// //     printf("%s\n", s1[1].name);
// //     printf("%d\n", s1[1].roll);
// //     printf("%d\n", s1[1].marks[0]);
// //     printf("%d\n", s1[1].marks[1]);
// //     printf("%d\n", s1[1].marks[2]);
// //     printf("%.2f\n", s1[1].avg);
// //     printf("%c\n", s1[1].grade);

// //     return 0;
// // }

// //if statement do not accept decimal/float

// #include<stdio.h>
// #include<string.h>

// struct student{
//         char name[50];
//         int roll;
//         int marks[4];
//         float avg;
//         char grade;
//     }stu1,stu2,stu3;

//    int main()
// {

// struct student stu[3];
// for(int i = 0;i<3;i++)
// { printf("student = %d \n",i+1);
// printf("enter the name : ");
//   scanf("%s",&stu[i].name);
//   printf("enter roll no. : ");
//     scanf("%d",&stu[i].roll);

//     int sum = 0;
// for(int mi = 0;mi<4;mi++)
// {    printf("enter marks = ");
//     scanf("%d",&stu[i].marks[mi]);
//     sum = sum + stu[i].marks[mi];
// }
// stu[i].avg = ((float)sum)/4;

// if((int)stu[i].avg>=90)
// {
//     stu[i].grade = 'A';
// }
// else if((int)stu[i].avg<90 && stu[i].avg>=60)
// {
//      stu[i].grade ='B';
// }
// else
//     {
//         stu[i].grade = 'c';
//     }
// }
// for(int i = 0;i<3;i++)
// {
//     printf(" name of the student : %s\n",stu[i].name);
//     printf("roll no. : %d\n",stu[i].roll);
// for(int mi = 0;mi<4;mi++)
// {

//     printf("%d \n",stu[i].marks[mi]);
// }
//     printf("%f \n",stu[i].avg);
//     printf("%c \n",stu[i].grade);

// }
// }

#include<stdio.h>
int main(){
int arr[] = {1,2,3,4,5};
*arr = *arr+3 + *(arr+3);
printf("%d",arr[0]);
}

