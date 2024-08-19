#include<stdio.h>

//It is mainly used to assign names to 
//integral constants, the names make a program easy to read and maintain.

//changes value to integer constanta
// enum friend{
//     rakshit,// by default 0
//     raghav, // 1
//     rajat // 2
// }name;

//altering default value of members
// enum friend{
//     rakshit=1,//  1
//     raghav, // 2
//     rajat // 3
// }name;

//assigning different value to members
// enum friend{
//     rakshit, //0
//     raghav = 22,
//     rajat //23
// }name;

//assigning same value to members
enum friend{
    rakshit, //0
    raghav = 22,
    rajat, //23
    
}name;

//no two enum members can have same name, they must be unique
// enum enemy{
//     rakshit, //0
//     ram,
//     sham
// }enemy;

enum enemy{
    prashant, //0
    ram,
    sham
}enemy;


int main(){

    enemy = prashant;
    name = rakshit;
    printf("%d\n", name);
    printf("%d", enemy);

    return 0;
}