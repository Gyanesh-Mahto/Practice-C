#include<stdio.h>

void my_swap(int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;
    printf("x=%d, y=%d\n", x,y);
}

int main()
{
    int a=5, b=10;
    my_swap(a,b);   //Values don't change due to call by value
    printf("a=%d, b=%d\n", a,b);
}