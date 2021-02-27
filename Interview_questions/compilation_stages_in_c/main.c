//My source file.
//Compile this with: gcc –Wall –save-temps main.c –o executable 
#include<stdio.h>
#define add(a,b) a+b    //Using Macros

int main()
{
    int a=5, b=6;
    printf("Addition is %d\n", add(a,b));
}