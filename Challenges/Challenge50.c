/* Challenge 50
Create a C program that calculates your weekly pay.
Ask the user to enter the number of hours worked in a week via the keyboard
Display as output the gross pay, the taxes, and the net pay

The following assumptions should be made:
-Basic pay rate = $12.00/hr
-Overtime (in excess of 40 hours) = time and a half (for hours over 40)
Tax rate:
-15% of the first $300
-20% of the next $150
-25% of the rest
*/

// a better practice to define all the taxrates as a preprocessor
#include <stdio.h>

int main()
{
	//initialise variables
	double userHours = 0.0, finalPay = 0.0, finalPayTaxed = 0.0;
	int payRate = 12;

	//get user input hours
	printf("Input worked hours a week:");
	scanf("%lf",&userHours);

	//condition for overtime
	if (userHours>40)
	{
		finalPay= ((userHours-40)*1.5 + 40) * payRate;
	}
	else
	{
		finalPay= userHours * payRate;
	}	


	//condition for tax
	if(finalPay<=300)
	{
		finalPayTaxed = 0.85*finalPay;
	}	
	else if(300<finalPay && finalPay<=450)
		//note C cannot define inequalities as one entire expression
	{
		finalPayTaxed = (0.85*300) + (0.8 * (finalPay-300));
	}
	else 
	{
		finalPayTaxed = (0.85*300) + (0.8 * 150) + (0.75 * (finalPay-450));
	}

	//print final pay calculation
	printf("Your calculated pay is: %.2lf \n",finalPay);
	printf("Your calculated pay is: %.2lf after taxes \n",finalPayTaxed);

	return 0;
}
