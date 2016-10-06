#include<stdio.h>


void foo1()
{
	printf("Hello I'm foo1\n");
}
void main()
{
	foo1();
	printf("I'm func1\n");
	printf("I'm debug 123 hahahahaha\n");
#ifdef DEBUG
	printf("This is scond\n");
#endif
}
