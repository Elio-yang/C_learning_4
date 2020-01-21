#include<stdio.h>
void interchange(int*u, int*v);
int main(void)
{
	int x = 5;
	int y = 10;
	printf("Originally x=%d %p y=%d  %p\n", x, &x, y, &y);
	interchange(&x, &y);
	printf("Now x=%d %p y=%d  %p\n", x, &x, y, &y); 
	
	return 0;
}
void interchange(int*u, int*v)
{
	int temp;
	temp = *u;
	*u = *v;
	*v = temp;
}
//换掉这个地址上的值