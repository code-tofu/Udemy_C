/*
Challenge 43: Convert minutes to years and days
Take in user input number of minutes
Output in years and days, in double

Create variables to store
user input of minutes (int)
minutes in a year
years
days
*/

#include <stdio.h>

int main(){
	//standardize and use camel case

	//Initialize variables
	int inputMins = 0;
	double convertYears=0.0, convertDays=0.0;
	int minutesInYear = 60*24*365;
	int minutesInDay = 60*24;

	//Get minutes input from user
	printf("Input number of minutes:");
	scanf("%d",&input_min);

	//Calculate
	//Use casting?
	convertYears= inputMins/minutesInYear;
	convertDays= inpuyMins/minutesInDay;

	//printf does not need address 
	printf("%lf",convertYears);
	printf("%lf",convertDays,);
	 
	return 0;
}
