#include<stdio.h>
int main()
{
	int num;
	while ((scanf("%d", &num)) == 1)
	{
		if (num < 0)
		{
			printf("num must be gigger than 0\n");
		}
		else if (num > 12)
		{
			printf("For better performance ensure num is smaller than 13");
		}
		else
		{
			printf("loop:%d\n", loop(num));
			printf("recursion:%d\n", rec(num));
		}
	}
	return 0;

}
int loop(int num)
{
	int i;
	for (i = 1; num > 1; num--)
	{
		i *= num;
	}
	return i;
}
int rec(int num)
{
	int l;
	int k;
	if (num<= 0)
	{
		k = 1;
	}
	else if (num > 0)
	{
		k = num * rec(num - 1);
	}
	return k;                                       
}//f(n)=n!->f(n)=n*f(n-1)->f(n-1)=(n-1)*f(n-2)...