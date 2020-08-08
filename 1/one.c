#include <stdio.h>
#include <stdlib.h>

int func1(){

    int age = 45;
    double gpa = 3.5;
    char grade = 'A';
    char phrase[] =  "this is an Array - it has Double Quotes \n\n";
    char characterName [] = "R_Dhankar";

    printf("Whose name is %s ? \n", characterName);
    printf("Mobile %s for him is %d \n\n","number" ,98710);
    printf("This is the Array - \n %s", phrase);

}


int main()
{
func1();
return 0;

}
