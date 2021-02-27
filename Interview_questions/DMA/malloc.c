/*
“malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory
with the specified size. It returns a pointer of type void which can be cast into a pointer of any form.
It initializes each block with default "garbage value".

Syntax:

ptr = (cast-type*) malloc(byte-size)
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p, n=10;

    p = (int*)malloc(n*sizeof(int));    //Malloc

    if(p==NULL)
    {
        printf("Memory is not allocated\n");
    }
    else
    {
        printf("Memory is successfully allocated\n");
        printf("Displaying the default values allocated by malloc\n");
        for(int i=0; i<n; i++)
        {
            printf("%d ", p[i]);
        }
        printf("\n");
        for(int i=0; i<n; i++)
        {
            p[i] = i+1;
        }

        printf("Displaying the allocated value\n");
        for(int i=0; i<n; i++)
        {
            printf("%d ", p[i]);
        }
    }
    free(p);    //freeing the memory to avoid memory leakage
    
    p = NULL;   //No more dangling pointer
}

/*
O/P:
Memory is successfully allocated
Displaying the default values allocated by malloc
2055040 0 2031952 0 1550808168 1147498063 1702259058 1210068256 1095586369 1380909134
Displaying the allocated value
1 2 3 4 5 6 7 8 9 10 
*/
