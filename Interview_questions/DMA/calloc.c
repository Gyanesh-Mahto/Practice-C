/*
“calloc” or “contiguous allocation” method in C is used to dynamically allocate the specified number of 
blocks of memory of the specified type. It initializes each block with a default value ‘0’.

Syntax:

ptr = (cast-type*)calloc(n, element-size);

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p, n=10;

    p = (int*)calloc(n,sizeof(int));    //Calloc

    if(p==NULL)
    {
        printf("Memory is not allocated\n");
    }
    else
    {
        printf("Memory is successfully allocated\n");
        printf("Displaying the default values allocated by calloc\n");
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
}

/*
O/P:
Memory is successfully allocated
Displaying the default values allocated by calloc
0 0 0 0 0 0 0 0 0 0
Displaying the allocat
*/