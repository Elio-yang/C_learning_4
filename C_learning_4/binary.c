#include<stdio.h>
int main()
{
	unsigned long num;
	printf("Enter a number :\n");
	while ((scanf("%lu", &num)) == 1)
	{
		printf("Binary equivalent:");
		Binary(num);
		printf("\n");
		printf("Please enter the next number:\n");
	}
	return 0;
}
int Binary(unsigned long N)
{
	int rem;
	rem = N % 2;
	if (N >= 2)
	{
		Binary(N / 2);
	}
	putchar(rem == 0 ? '0' : '1');
}		