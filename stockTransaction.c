//Stock Transaction Program
#include <stdio.h>

int main ()
{
	int sharesPurchased = 1000;
	double previousPrice = 45.50;
	double commission1 = sharesPurchased * previousPrice * 0.02;
	double totalPaid = previousPrice * sharesPurchased;
	double totalTransact1 = commission1 + (previousPrice * sharesPurchased);

	int sharesSold = 1000;
	double currentPrice = 56.90;
	double commission2 = sharesSold * currentPrice * 0.02;
	double totalSold = currentPrice * sharesSold;
	double totalTransact2 = commission2 + (previousPrice * sharesPurchased);

	double netProfit = totalSold - (totalPaid + commission1 + commission2);

	printf("Joe paid $%.2f for the stocks.\n", totalPaid);
	printf("Joe paid $%.2f for the buying commission.\n", commission1);
	printf("Joe paid a total of $%.2f for the entire deal.\n", totalTransact1);

	printf("\n");

	printf("Joe sold the stocks for $%.2f.\n", totalSold);
	printf("Joe paid $%.2f for the selling commission.\n", commission2);

	printf("\n");

	printf("Joe made a net profit of $%.2f.\n", netProfit);

	return 0;
}