#include<stdio.h>

void master_foo1()
{
	printf("Hello I'm master_foo\n");
}
void main()
{
	printf("I'm func1\n");
	printf("I'm debug 123 hahahahaha\n");
#ifdef DEBUG
	printf("This is scond\n");
#endif
}
