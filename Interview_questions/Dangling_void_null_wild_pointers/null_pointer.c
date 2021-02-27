/*
NULL Pointer is a pointer which is pointing to nothing. In case, if we don’t have address to be assigned 
to a pointer, then we can simply use NULL.

Important Points

NULL vs Uninitialized pointer – An uninitialized pointer stores an undefined value. A null pointer 
stores a defined value, but one that is defined by the environment to not be a valid address for any 
member or object.
NULL vs Void Pointer – Null pointer is a value, while void pointer is a type
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p = NULL;
    printf("The value of p is %p", p); 
}
/*
O/P:
The value of p is 0000000000000000
*/