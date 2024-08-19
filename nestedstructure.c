// NESTED STRUCTURE

// syntax

// METHOD 1
//  struct A{
//  member
// };
// struct B{
//     struct A a1;
// };struct B b1;

// METHOD 2
//  struct B{
//      //member
//      struct A{
//          //member
//      }a1;
//  }b1;

// METHOD1
//  #include <stdio.h>
//  #include <string.h>

// struct dob
// {
//     int dd;
//     int mm;
//     int yyyy;
// };

// struct student{
//     char name[100];
//     int roll;
//     struct dob dob;
// };

// int main()
// {
//     struct student stu;

//     scanf("%s",stu.name);
//     scanf("%d",&stu.roll);
//     scanf("%d",&stu.dob.dd);//accessing variable from another structure
//     scanf("%d",&stu.dob.mm);//accessing variable from another structure
//     scanf("%d",&stu.dob.yyyy);//accessing variable from another structure

//     printf("%s\n",stu.name);
//     printf("%d\n",stu.roll);
//     printf("%d-%d-%d",stu.dob.dd,stu.dob.mm,stu.dob.yyyy);

//     return 0;
// }

// METHOD 2
//  #include <stdio.h>
//  #include <string.h>

// struct student
// {
//     char name[100];
//     int roll;
//     struct dob
//     {
//         int dd;
//         int mm;
//         int yyyy;
//     } dob;
// };

// int main()
// {
//     struct student stu;

//     scanf("%s", stu.name);
//     scanf("%d", &stu.roll);
//     scanf("%d", &stu.dob.dd);   // accessing variable from another structure
//     scanf("%d", &stu.dob.mm);   // accessing variable from another structure
//     scanf("%d", &stu.dob.yyyy); // accessing variable from another structure

//     printf("%s\n", stu.name);
//     printf("%d\n", stu.roll);
//     printf("%d-%d-%d", stu.dob.dd, stu.dob.mm, stu.dob.yyyy);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// struct student
// {
//     char name[100];
//     int roll;
//     struct dob
//     {
//         int dd;
//         int mm;
//         int yyyy;
//     } dob;
// };

// int main()
// {
//     struct student stu[2];

//     for (int i = 0; i < 2; i++)
//     {
//         scanf("%s", stu[i].name);
//         scanf("%d", &stu[i].roll);
//         scanf("%d", &stu[i].dob.dd);
//         scanf("%d", &stu[i].dob.mm);
//         scanf("%d", &stu[i].dob.yyyy);
//     }

//     for (int i = 0; i < 2; i++)
//     {
//         printf("%s\n", stu[i].name);
//         printf("%d\n", stu[i].roll);
//         printf("%d-%d-%d", stu[i].dob.dd,stu[i].dob.mm,stu[i].dob.yyyy);
//     }

//     return 0;
// }

//INTIALIZATION

//METHOD 1
// #include <stdio.h>
// #include <string.h>

// struct student
// {
//     char name[100];
//     int roll;
//     struct dob
//     {
//         int dd;
//         int mm;
//         int yyyy;
//     } dob;
// } stu;

// int main()
// {

//     struct dob dob = {.dd = 12, .mm = 5, .yyyy = 2003};
//     struct student stu = {.name = "rakshit", .roll = 33, .dob = dob};

//     struct student *ptr = &stu;

//     printf("%s\n", ptr->name);
//     printf("%d\n", ptr->roll);
//     printf("%d-%d-%d", ptr->dob.dd, ptr->dob.mm, ptr->dob.yyyy);

//     return 0;
// }


//METHOD 2
#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
    struct dob
    {
        int dd;
        int mm;
        int yyyy;
    } dob;
} stu;

int main()
{


    struct student stu = {.name = "rakshit", .roll = 33, .dob ={12,4,2003}};

    struct student *ptr = &stu;

    printf("%s\n", ptr->name);
    printf("%d\n", ptr->roll);
    printf("%d-%d-%d", ptr->dob.dd, ptr->dob.mm, ptr->dob.yyyy);

    return 0;
}
