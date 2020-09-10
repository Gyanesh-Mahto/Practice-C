#include<stdio.h>
int main()
{
    int i, *ip, **idp;
    char c, *cp, **cdp;
    float f, *fp, **fdp;
    i=21;
    f= 21.56;
    c='A';

    ip=&i;
    cp=&c;
    fp=&f;

    idp=&ip;
    cdp=&cp;
    fdp=&fp;

    printf("Address of i: %u\n", &i);
    printf("Address of c: %u\n", &c);
    printf("Address of f: %u\n", &f);

    printf("Address contained in ip: %u\n", ip);
    printf("Address contained in cp: %u\n", cp);
    printf("Address contained in fp: %u\n", fp);

    printf("Address contained in idp: %u\n", idp);
    printf("Address contained in cdp: %u\n", cdp);
    printf("Address contained in fdp: %u\n", fdp);

    printf("Value of i: %d\n", i);
    printf("Value of c: %c\n", c);
    printf("Value of f: %f\n", f);

    printf("Value of i: %d\n", *ip);
    printf("Value of c: %c\n", *cp);
    printf("Value of f: %f\n", *fp);

    printf("Value of i: %d\n", **idp);
    printf("Value of c: %c\n", **cdp);
    printf("Value of f: %f\n", **fdp);
}

/*
O/P:
----
Address of i: 6684164
Address of c: 6684151
Address of f: 6684132
Address contained in ip: 6684164
Address contained in cp: 6684151
Address contained in fp: 6684132
Address contained in idp: 6684152
Address contained in cdp: 6684136
Address contained in fdp: 6684120
Value of i: 21
Value of c: A
Value of f: 21.559999
Value of i: 21
Value of c: A
Value of f: 21.559999
Value of i: 21
Value of c: A
Value of f: 21.559999
*/