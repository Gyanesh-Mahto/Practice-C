#include<stdio.h>
int main()
{
    int i=3;
    printf("Address of i: %d\n", &i);
    printf("Value of i: %d\n", i);
}
/*
O/P:
Address of i: 6684188
Value of i: 3

& <--'Address of' operator
* <--'Value at address' operator OR 'indirection' operator
*/