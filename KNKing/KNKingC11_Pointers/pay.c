#include <stdio.h>
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
	*twenties = 0, *tens = 0, *fives = 0, *ones = 0;
	while (dollars < 20)
	{
		dollars = dollars - 20;
		*twenties++;
	}
	while (dollars < 10)
	{
		dollars = dollars - 10;
		*tens++;
	}
	while (dollars < 5)
	{
		dollars = dollars - 5;
		*fives++;
	}
	while (dollars < 1)
	{
		dollars = dollars - 1;
		*ones++;
	}
	
	
	/*if (dollars > 20)
	{
		*twenties = dollars / 20;
		dollars = dollars - 20 * (dollars / 20);
		*tens = 0;
		*fives = 0;
		*ones = 0;
	}
	
	if (dollars > 10)
	{
		*tens = dollars / 10;
		dollars = dollars - 10 * (dollars / 10);
	}
	
	if (dollars > 5)
	{
		*fives = dollars / 5;
		dollars = dollars - 5 * (dollars / 5);
	}
	if (dollars > 1)
	{
		*ones = dollars;
		dollars = dollars - 1 * (dollars / 1);
	}
	
	printf("$20 bills : %d\n", *twenties);
	printf("$10 bills : %d\n", *tens);
	printf("5 bills : %d\n", *fives);
	printf("$1 bills : %d\n", *ones);*/

}

main()
{
	int amount;
	int data20, data10, data5, data1;
	printf("Enter a dollar amount : ");
	scanf_s("%d", &amount);
	pay_amount(amount, &data20, &data10, &data5, &data1);
}