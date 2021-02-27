/*
“realloc” or “re-allocation” method in C is used to dynamically change the memory allocation of a 
previously allocated memory. In other words, if the memory previously allocated with the help of malloc 
or calloc is insufficient, realloc can be used to dynamically re-allocate memory.
re-allocation of memory maintains the already present value and new blocks will be initialized with 
default garbage value.

Syntax:

ptr = realloc(ptr, newSize);

where ptr is reallocated with new size 'newSize'.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p, n = 5;

    p = (int*)calloc(n, sizeof(int));   //calloc

    if(p == NULL)
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

        printf("Displaying the allocated values for n = 5\n");
        for(int i=0; i<n; i++)
        {
            printf("%d ", p[i]);
        }

        printf("\n");

        printf("Resizing the memory block using re-alloc\n");
        n = 10;
        p = (int*) realloc(p, n*sizeof(int));   //re-alloc
        printf("Displaying the default values allocated by realloc\n");
        for(int i=0; i<n; i++)
        {
            printf("%d ", p[i]);
        }

        printf("\n");

        for(int i=5; i<n; i++)
        {
            p[i] = i+1;
        }

        printf("Displaying the allocated values for n = 10\n");
        for(int i=0; i<n; i++)
        {
            printf("%d ", p[i]);
        }

        printf("\n");
    }
    free(p);    //freeing the memory to avoid memory leakage
    
    p = NULL;   //No more dangling pointer
}

/*
O/P:
Memory is successfully allocated
Displaying the default values allocated by calloc
0 0 0 0 0
Displaying the allocated values for n = 5
1 2 3 4 5
Resizing the memory block using re-alloc
Displaying the default values allocated by realloc
1 2 3 4 5 0 83064888 6850 10027344 0
Displaying the allocated values for n = 10
1 2 3 4 5 6 7 8 9 10
*/
