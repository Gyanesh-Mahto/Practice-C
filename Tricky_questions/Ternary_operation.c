//WAP to replace if-else statement with ternary operator(?:)
#include<stdio.h>
int main()
{
int c=100;
int b=0;
// c = some value 
int result=20;
if(c > 10)
  b = 20;
else
  c = 20;
printf("%d\n%d\n", b, c);

(c>10)?(b=20):(c=20); //Code to replace if-else to ternary operator.
printf("%d\n%d\n", b, c);
(c>10?b:c)=20;  //Code to repeat 20 only once in ternary operation. But only compiles with g++ and not gcc
printf("b=%d\nc=%d\n", b, c);
*((c>10)?&b:&c)=20; //3. C-code to repeat 20 only once in ternary operation.
printf("b=%d\nc=%d\n", b, c);
}
/*
2.
This is due to the precedence issue. In C (gcc): conditional operator(?:) has higher precedence than 
Assignment operator(=),
But in C++(g++): conditional operator(?:) has same priority than Assignment operator(=). So, it compile 
the program with g++

3.
Since b and c are lvalue and so ((c>10)?&b:&c) is considered as lvalue and 20 is considered rvalue which is not correct. So, in order to
assign value of 20, need to assigb value to reference, So, b and c are referenced and then whole conditional operator is de-refernced.
So, it will work in C.
*/
