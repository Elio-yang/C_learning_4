#include<stdio.h>
int main()
{
	int ball = 22;
	int *ptr;//type int pointer¡ª¡ªptr
	int val;
	ptr = &ball;//address of ball in memory,ptr pointed to ball£¬value of ptr is &ball
	val = *ptr;//the value of the pointer pointed to.

	printf("%p  %d", ptr, val);

	return 0;
}
