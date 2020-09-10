#include<stdio.h>
int main()
{
    int i=3, *j;
    j=&i;
    printf("Value of i: %d\n", i);
    printf("Address of i: %d\n", &i);
    printf("Value of j: %d\n", j);
    printf("Address of j: %d\n", &j);
    
}
/*
O/P:
Value of i: 3
Address of i: 6684188
Value of j: 6684188
Address of j: 6684176

*j <--This declaration tells the compiler that j will be used to store the address of integer value.

NOTE: if only j is used to store the address like as below:
int i=3, j;
j=&i;   //It will just throw warning and not any error like as below

.\Example_3.c:5:6: warning: assignment to 'int' from 'int *' makes integer from pointer without a cast [-Wint-conversion]      
    5 |     j=&i;
*/