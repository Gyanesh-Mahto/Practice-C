#include<stdio.h>
int main()
{
    //case - 1
    //register int a;
    //int *p = &a;
    //printf("%d\n", a);

    //case - 2
    int a;
    register int *p = &a;
    printf("%d\n", *p);
}