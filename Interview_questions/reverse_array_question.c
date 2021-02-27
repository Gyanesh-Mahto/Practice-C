/*
Reverse Array -
I/P: 10 12 13 14
O/P: 14 13 12 10
*/
#include <stdio.h>
int main()
{
    int a[4]={10, 12, 13, 14};
    int size_a;
    size_a = sizeof(a)/sizeof(a[0]);
    for(int i=size_a-1; i!=-1; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}