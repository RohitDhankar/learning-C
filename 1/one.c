#include <stdio.h>
#include <stdlib.h>

// were using gcc to compile = GNU Compiler Collection (GCC)

int func1(){

    int _myAge = 45;
    // INT var assigned with Underscore and Camel Case
    int _hisAge = 45 , _hisHeight = 5 , _hisEyes = 4 ; 
    // All INT Var assigned on a single line of Code
    double gpa = 3.5;
    char grade = 'A';
    char phrase[] =  "this is an Array - it has Double Quotes \n\n";
    char characterName [] = "R_Dhankar";
    float float_num = 5.555;
    double double_num = 8.999999;
    size_t sizeType = sizeof(float);
    // The size_t  - is an ALIAS for an INTEGER Type 
    // size_t {aka long unsigned int} == ld

    printf("Whose name is %s ? \n", characterName);
    printf("Whose age is %d  and he has %d eyes\n", _myAge , _hisEyes);
    printf("Mobile %s is %d \n\n","number" ,98710);
    printf("In an exam he got %s == %d \n\n","grade" ,grade);
    printf("This is the Array - \n %s", phrase);
    printf("This is the float_num - \n %f \n", float_num);
    printf("This is the double_num - \n %f \n", double_num);
    printf("Size of FLOAT in Bits on this system is - \n %ld ",sizeType);
    // size_t {aka long unsigned int} == ld

}


int main(void)
{
func1();
getchar();
// above getchar will wait for KeyPress - RETURN
return 0;

}
