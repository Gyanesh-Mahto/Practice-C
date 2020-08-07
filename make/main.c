#include<stdio.h>
#include"sum.h"
#include"print.h"
int main()
{
    int a, b, c;
    printf("Please enter first num\n");
    scanf("%d", &a);
    printf("Please enter second num\n");
    scanf("%d", &b);

    c=sum(a, b);
    print(c);
}