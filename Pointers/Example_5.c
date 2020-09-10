#include<stdio.h>
int main()
{
    int i=3;
    int *j;
    int **k;
    j=&i;
    k=&j;
    printf("Address of i: %u\n", &i);
    printf("Address of i: %u\n", j);
    printf("Address of i: %u\n", *k);
    printf("Address of j: %u\n", &j);
    printf("Address of j: %u\n", k);
    printf("Address of k: %u\n", &k);

    printf("Value of k: %u\n", k);
    printf("Value of j: %u\n", j);
    printf("Value of i: %d\n", i);
    printf("Value of i: %d\n", *j);
    printf("Value of i: %d\n", **k);
    printf("Value of i: %d\n", *(&i));
}

/*
O/P:
Address of i: 6684188
Address of i: 6684188
Address of i: 6684188
Address of j: 6684176
Address of j: 6684176
Address of k: 6684168
Value of k: 6684176
Value of j: 6684188
Value of i: 3
Value of i: 3
Value of i: 3
Value of i: 3
*/