#include <stdio.h>

extern int var;    //Only declared but not defined.
extern int a = 0;   //Delaration + Initialization makes it Definition.
int x; //Declared + Defined
int main()
{
    a = 10; 
    return 0;
}