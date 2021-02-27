/*
Void pointer is a specific pointer type – void * – a pointer that points to some data location in storage,
which doesn’t have any specific type. Void refers to the type. Basically the type of data that it points 
to is can be any. If we assign address of char data type to void pointer it will become char Pointer, 
if int data type then int pointer and so on. Any pointer type is convertible to a void pointer hence it 
can point to any value.

Important Points

- void pointers cannot be dereferenced. It can however be done using typecasting the void pointer
- Pointer arithmetic is not possible on pointers of void due to lack of concrete value and thus size.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x = 5;
    float y = 5.5f;
    void *void_ptr;

    void_ptr = &x;
    printf("Address of x = %d\n", &x);
    printf("Address of x = %d\n", (int*)void_ptr);
    printf("Value of x = %d\n", *(int*)void_ptr);
    printf("Size of void_ptr = %d\n", sizeof(void_ptr));

    void_ptr = &y;
    printf("Address of y = %d\n", &y);
    printf("Address of y = %d\n", (float*)void_ptr);
    printf("Value of y = %f\n", *(float*)void_ptr);
    printf("Size of void_ptr = %d\n", sizeof(void_ptr));
}
/*
O/P:
Address of x = 6684172
Address of x = 6684172
Value of x = 5
Size of void_ptr = 8    <---Size of compiler is 64 bit
Address of y = 6684176
Address of y = 6684176
Value of y = 5.500000
Size of void_ptr = 8
*/