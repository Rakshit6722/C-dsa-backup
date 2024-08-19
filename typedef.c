// #include<stdio.h>

// //typedef is a keyword
// //it provides existing data types with a new name
// //syntax : typedef existingdatatype newdatatype]
// //it can be global or local

//     //typedef for strucutre

//     //Method 1
//     typedef struct student{
//         char name[20];
//         int roll;
//         char grade;
//     }stu;

// typedef float f;

// int main(){

//     // typedef float f;
//     // typedef int i;

//     // f a = 12.3;
//     // i b = 12;
//     // printf("%.2f\n",a);
//     // printf("%d",b);

//     stu st;
//     st.roll = 12;
//     st.grade = 'A';

//     printf("%d",st.roll);

//     return 0;
// }

#include <stdio.h>

// typedef for strucutre

// // Method 1
// typedef struct student
// {
//     char name[20];
//     int roll;
//     char grade;
// } stu;

// int main()
// {

//     stu st;
//     st.roll = 12;
//     st.grade = 'A';

//     printf("%d", st.roll);

//     return 0;
// }

// Method 2
// struct student
// {
//     char name[20];
//     int roll;
//     char grade;
// };
  
// int main()
// {

//     typedef struct student student;
//     student st;
    
//     st.roll = 12;
//     st.grade = 'A';

//     printf("%d", st.roll);

//     return 0;
// }

//

//typedef for pointers

typedef int *ptr;

int main(){

    ptr val;

    int a = 12;
    val = &a;

    printf("%d",*val);

    return 0;
}

