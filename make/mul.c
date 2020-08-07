#include"mul.h"
#include"print.h"
int mul(int a, int b)
{
    int c;
    c=a*b;
    return c;
}

int main()
{
    int a, b, c;
    printf("Please enter first num\n");
    scanf("%d", &a);
    printf("Please enter second num\n");
    scanf("%d", &b);

    c=mul(a, b);
    print(c);
}