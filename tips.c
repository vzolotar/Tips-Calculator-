// Tips Calculator - tips.c
#include <stdio.h>

float grand_total_amt, total_amt, tip_amt, tip_percentage;

int main(void) 
{
 
	printf("\n\n");

	printf("\n\t *****************************************************************");
	printf("\n\t *                                                               *");
	printf("\n\t *                        W E L C O M E                          *");
	printf("\n\t *                                                               *");
	printf("\n\t *                             To                                *");
	printf("\n\t *                                                               *");
	printf("\n\t *    	                 Tips Calculator    	                 *");
	printf("\n\t *                                                               *");
	printf("\n\t *****************************************************************");
	printf("\n\n\n");
  
	printf("\n\tBill Amount - Please provide your total bill amount: ");
	scanf("%f", &total_amt);

	printf("\n\tTip Amount - Percentage you are going to give: ");
	scanf("%f", &tip_percentage);

	tip_amt = total_amt * tip_percentage / 100;

	grand_total_amt = total_amt + tip_amt;

	printf("\n\tYour tip amount is $%.2f, and your Grand Total Amount is $%.2f\n", tip_amt, grand_total_amt);
	printf("\n\n");

	return 0;
}
