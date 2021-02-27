/*
A pointer which has not been initialized to anything (not even NULL) is known as wild pointer. 
The pointer may be initialized to a non-NULL garbage value that may not be a valid address.
*/
#include<stdio.h>
int main()
{
    int *p; //p is a wild pointer now
    int x = 5;
    p = &x; //p is not a wild pointer now
}
