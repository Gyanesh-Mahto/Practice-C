/*
A pointer pointing to a memory location that has been deleted (or freed) is called dangling pointer. 
*/

#include<stdio.h>
#include<stdlib.h>

int *fun()
{
   static int x = 5;
    return &x;
}

int main()
{
    //Case - 1
    int *p = (int*)calloc(1, sizeof(int));
    printf("%d\n", *p); //Prints 0
    free(p);    //Memory is free
    printf("%d\n", *p); //P is now dangling pointer as it points to deleted memory location.
    p = NULL;   //No More Dangling Pointer.

    //Case - 2
    int *q = fun();
    printf("%d\n", *q); //q is a dangling pointer as it points to a memory location which is out-of-scope
    //Can be avoided if x is static
    q = NULL;   //No More Dangling Pointer.
}