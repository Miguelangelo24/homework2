//Restaurant Bill
#include <stdio.h>

int main ()
{
	double bill = 88.67;
	double tax = (bill * 0.0675);
    double tip = (bill + tax) / 5;
	double finalBill = bill + tax + tip;

	printf("The cost of the meal is $%.2f\n", bill);
	printf("Tax : $%.2f\n", tax);
	printf("Tip : $%.2f\n", tip);
	printf("Final Total : $%.2f\n", finalBill);

	return 0;
}
