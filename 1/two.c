#include <stdio.h>
#include <stdlib.h>

// Below we are PROTO-Typing , but before we got his ERROR 

/* two.c: In function ‘main’:
two.c:8:1: warning: implicit declaration of function ‘func1’ [-Wimplicit-function-declaration]
 func1();
 ^~~~~
 */

// ProtoType = name of the function,return type and parameter list



int func1();

int main(void)
{
func1();
getchar();
// above getchar will wait for KeyPress - RETURN
return 0;

}


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


