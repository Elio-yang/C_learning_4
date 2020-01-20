#include<stdio.h>
#include"hotel.h"

int menu(void)
{
	int code, status;
	printf("\n%s%s\n", STARS, STARS);
	printf("Enter the number of the desired hotel:\n");
	printf("1) Fairfield Arms           2) Hotel Olympic\n");
	printf("3) Chertworthy Plaza        4) The Stockton\n");
	printf("5) quit\n");
	printf("%s%s\n", STARS, STARS);

	while ((status = scanf("%d", &code)) != 1 || (code < 1 || code>5))
	{
		if (status != 1)
		{
			scanf("%*s");//*:用以表示该输入项,读入后不赋予相应的变量，即跳过该输入值
		}
		printf("Enter an integer from 1 to 5,please.\n");
	}
	return code;
}
int getnights(void)
{
	int nights;

	printf("How many nights are needed?");
	while (scanf("%d", &nights) != 1)
	{
		scanf("%*s");
		printf("Please enter an integer,such as 2.");
	}
	return nights;
}
void showprice(double hotel_rate, int nights)
{
	int n;
	double totall = 0.0;
	double factor = 1.0;

	for (n = 1; n <= nights; n++, factor *= DISCOUNT)
	{
		totall += hotel_rate * factor;
	}
	printf("The total cost will be $%0.2f.\n", totall);
}